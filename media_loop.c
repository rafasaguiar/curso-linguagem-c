#include <stdio.h>
int main () {
    float n1, n2, media;
    int continuar = 1;
    while (continuar == 1) {
        printf("\n---Calculo de media---\n");
        printf("\nDigite sua primeira nota:\n");
        scanf("%f", &n1);
        printf("\nDigite sua segunda nota:\n");
        scanf("%f", &n2);
        media = (n1 + n2)/2;
        printf("\nSua media sera: %.2f\n", media);
    if (media >= 7) {
            printf("\nParabens, voce esta aprovado!\n");
        } 
    else if (media >= 5) { 
            printf("\nEm recuperacao, estude um pouco mais!\n");
        } 
     else { 
            printf("\nReprovado, vai repetir de ano\n");
        }
    printf("\nDeseja calcular outra media? (1-sim/0-sair)");
    scanf("%d", &continuar);
    }
    printf("\nObrigado por utilizar nosso sistema! Volte sempre!\n");
    return 0;
}
