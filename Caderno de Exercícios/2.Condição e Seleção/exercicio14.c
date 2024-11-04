/*14. Uma imagem digital possui largura w e altura h. Um pixel dessa imagem está associado a uma
posição (x, y) no plano da imagem. Faça um programa que receba w, h, x e y, e informe se
corresponde a um pixel da imagem especificada.*/

#include <stdio.h>
int main(){
    int w, h, x, y;
    printf("Digite a largura da imagem: ");
    scanf("%d", &w);
    printf("Digite a altura da imagem: ");
    scanf("%d", &h);
    printf("Digite a posição x do pixel: ");
    scanf("%d", &x);
    printf("Digite a posição y do pixel: ");
    scanf("%d", &y);
    if (x >= 0 && x < w && y >= 0 && y < h) {
        printf("O pixel (%d, %d) está dentro da imagem.", x, y);
    } else {
        printf("O pixel (%d, %d) está fora da imagem.", x, y);
    }
    return 0;
}