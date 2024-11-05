/*77. Faça uma função em C que receba uma matriz 3 ×3, calcule seu determinante e ao final mostre
na tela o valor resultante.
    int calcular_determinante(int matriz[3][3]) {
    // Sua implementação aqui
    }
    int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int determinante = calcular_determinante(matriz);
    printf("O determinante da matriz é: %d\n", determinante);
    return 0;
    }
Exemplo de Execução
Entrada:
 1 2 3
 4 5 6
 7 8 9
Saída:
 O determinante da matriz é: 0*/

#include <stdio.h>
int calcular_determinante(int matriz[3][3]){
    int diagonalPrincipal, diagonalSecundaria, determinante = 0;
    diagonalPrincipal = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
    diagonalSecundaria = (matriz[0][2] * matriz[1][1] * matriz[2][0]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    determinante = diagonalPrincipal - diagonalSecundaria;
    return determinante;
}

int main(){
    int matriz[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    int determinante = calcular_determinante(matriz);
    printf("O determinante da matriz é: %d\n", determinante);
    return 0;
}