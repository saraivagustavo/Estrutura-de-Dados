/*Esta atividade corresponde ao exercício 114 do caderno de atividades. Segue o enunciado replicado.
Implemente as seguintes funções:
a) DynVec *dv_union(DynVec *dv1, DynVec *dv2): Retorna um vetor com a união dos elementos de dv1 e dv2.
b) DynVec *dv_intersection(DynVec *dv1, DynVec *dv2): Retorna um vetor com a interseção dos elementos de dv1 e dv2.
Enviar 3 arquivos: main.c, dynvec.c e dynvec.h.*/

#include "dynvec.h"
#include <stdio.h>

int main()
{
    //create two dynamic vectors
    DynVec *dv1 = dv_create();
    DynVec *dv2 = dv_create();

    //insert values into the first dynamic vector
    dv_insert(dv1, 2);
    dv_insert(dv1, 4);
    dv_insert(dv1, 6);
    dv_insert(dv1, 8);

    //insert values into the second dynamic vector
    dv_insert(dv2, 1);
    dv_insert(dv2, 3);
    dv_insert(dv2, 5);
    dv_insert(dv2, 7);
    
    dv_union(dv1, dv2);
    dv_intersection(dv1, dv2);

    printf("Union: ");
    dv_print_values(dv_union(dv1, dv2));
    printf("\n");
    printf("Intersection: ");
    dv_print_values(dv_intersection(dv1, dv2));

    //free the memory associated with the dynamic vectors
    dv_free(dv1);
    dv_free(dv2);

    return 0;
}