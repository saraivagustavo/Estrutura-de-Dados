/*Na implementação do TAD Hash (https://github.com/thiagopx/ed/tree/master/hashtable), utilizamos uma função de dispersão (hash) fixa. Essa abordagem hard-coded, no entanto, demanda a recompilação do módulo em caso de troca da função hash. Para melhorar essa situação, você foi contratado pela NASA para propor uma solução alternativa baseada em ponteiros para funções*.
Esta atividade consiste em enviar um arquivo .c com uma implementação alterada. Nessa nova versão, você deve:
Definir um tipo HashFunctionPtr (utilizando typedef) como um ponteiro para função que recebe um argumento inteiro (número de matrícula de um estudante) e retorna um inteiro.
Ajustar as demais partes do código para utilizar a função hash referenciada na estrutura da tabela. Por exemplo, você poderia inicializar uma tabela na função main fazendo , onde hash1 é uma função hash cujo argumento e retorno são do tipo inteiro.
Criar e utilizar duas funções hash (hash1 e hash2) para teste.*/


#include "hash.h"
#include <stdlib.h>
#include <string.h>

// Hash table size (prime number)
#define TABSIZE 101

// Define um tipo para ponteiro de função hash
typedef int (*HashFunctionPtr)(int);

// Estrutura da tabela hash
struct hash
{
   Student *v[TABSIZE];
   HashFunctionPtr hash_function; // Ponteiro para a função hash
};

// Função hash 1: divisão simples
static int hash1(int id)
{
   return id % TABSIZE;
}

// Função hash 2: multiplicação com constante
static int hash2(int id)
{
   const double A = 0.618033; // Constante irracional (regra de Knuth)
   return (int)(TABSIZE * (id * A - (int)(id * A)));
}

// Criação da tabela hash
Hash *hsh_create(HashFunctionPtr hash_func)
{
   Hash *tab = (Hash *)malloc(sizeof(Hash));
   if (tab == NULL)
      return NULL;

   // Inicializa todas as posições da tabela como NULL
   for (int i = 0; i < TABSIZE; i++)
      tab->v[i] = NULL;

   // Define a função hash a ser utilizada
   tab->hash_function = hash_func;

   return tab;
}

// Liberação da memória da tabela hash
void hsh_free(Hash *tab)
{
   if (tab == NULL)
      return;

   // Libera os registros armazenados
   for (int i = 0; i < TABSIZE; i++)
      free(tab->v[i]);

   // Libera a estrutura da tabela
   free(tab);
}

// Busca por um estudante pelo ID
Student *hsh_search(Hash *tab, int id)
{
   if (tab == NULL || tab->hash_function == NULL)
      return NULL;

   // Calcula o índice inicial usando a função hash
   int h = tab->hash_function(id);

   // Procura o estudante na tabela
   while (tab->v[h] != NULL)
   {
      if (st_get_id(tab->v[h]) == id)
         return tab->v[h];
      h = (h + 1) % TABSIZE; // Tratamento de colisões por sondagem linear
   }

   return NULL; // Não encontrado
}

// Insere um estudante na tabela hash
void hsh_insert(Hash *tab, Student *student)
{
   if (tab == NULL || tab->hash_function == NULL || student == NULL)
      return;

   // Calcula o índice inicial usando a função hash
   int h = tab->hash_function(st_get_id(student));

   // Procura a próxima posição livre
   while (tab->v[h] != NULL)
      h = (h + 1) % TABSIZE;

   // Insere o estudante na posição encontrada
   tab->v[h] = student;
}

// Função principal para teste
int main()
{
   // Cria uma tabela hash utilizando a função hash1
   Hash *table1 = hsh_create(hash1);
   if (table1 == NULL)
   {
      printf("Erro ao criar tabela hash.\n");
      return 1;
   }

   // Cria uma tabela hash utilizando a função hash2
   Hash *table2 = hsh_create(hash2);
   if (table2 == NULL)
   {
      printf("Erro ao criar tabela hash.\n");
      return 1;
   }

   // Exemplo de uso: inserir e buscar estudantes
   Student *student1 = (Student *)malloc(sizeof(Student));
   st_set_id(student1, 12345);
   strcpy(student1->name, "Alice");
   strcpy(student1->email, "alice@example.com");

   hsh_insert(table1, student1);
   hsh_insert(table2, student1);

   // Buscar estudante na tabela 1
   Student *found1 = hsh_search(table1, 12345);
   if (found1)
      printf("Encontrado na tabela 1: %s\n", found1->name);
   else
      printf("Não encontrado na tabela 1.\n");

   // Buscar estudante na tabela 2
   Student *found2 = hsh_search(table2, 12345);
   if (found2)
      printf("Encontrado na tabela 2: %s\n", found2->name);
   else
      printf("Não encontrado na tabela 2.\n");

   // Liberar memória
   hsh_free(table1);
   hsh_free(table2);
   free(student1);

   return 0;
}