#include <stdio.h>
int main () {
    float metros, resultado;
    int opcao;
    int continuar = 1;
    while (continuar == 1) {
    printf("\n---Conversor de Medidas Profissional---\n");
    printf("Digite o valor em metros:");
    scanf("%f", &metros);

    printf("\nEscolha a opcao desejada:\n");
    printf("\n1 - Centimetros (m * 100)\n");
    printf("\n2 - Milimetros (m * 1000)\n");
    printf("\n3 - Quilometros (m / 1000)\n");
    printf("\nOpcao:\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        resultado = metros * 100;
        printf("\nResultado: %.2f metros, convertido, sera %.3f centimetros\n", metros, resultado);
    }
    else if (opcao == 2) {
        resultado = metros * 1000;
        printf("\nResultado: %.2f metros, convertido, sera %.3f milimetros\n", metros, resultado);
    }
    else if (opcao == 3) {
        resultado = metros / 1000;
        printf("\nResultado: %.2f metros, convertido, sera %.4f quilometros\n", metros, resultado);
    }

    else {
        printf("\nOpcao invalida! Digite novamente:");
    }

    printf("\nDeseja fazer outra conversao? (1-sim/0-sair)\n");
    scanf("%d", &continuar);
    }
    printf("\nObrigado por utilizar nosso conversor de medidas! Volte sempre!\n");
return 0;
}