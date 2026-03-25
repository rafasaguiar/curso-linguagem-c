#include <stdio.h>
int main () {
    int ano;
    int continuar = 1;

    while (continuar == 1) {
    printf("\n---Saiba se um ano e bissexto ou nao\n");
    printf("\nDigite aqui o ano:\n");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("\nO ano %d e bissexto\n", ano);
    }
    else {
        printf("\nO ano %d nao e bissexto\n", ano);
    }

    printf("\nDeseja verificar outro ano? (1-sim/0-sair)\n");
    scanf("%d", &continuar);
    }

    printf("\nObrigado por utilizar nosso sistema!\n");
    
    return 0;
}