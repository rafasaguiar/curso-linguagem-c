#include <stdio.h>
int main () {
    float peso, altura, imc;
    int continuar = 1;

    while (continuar == 1) {
        printf("\n---Calculadora de IMC---\n");

        printf("Digite seu peso (em kg):");
        scanf("%f", &peso);
        printf("Digite sua altura (em m - ex: 1.75):");
        scanf("%f", &altura);
        imc = peso / (altura * altura);

        printf("Seu IMC sera: %.2f\n", imc);

        if (imc < 18.5) {
            printf("\nClassificacao: abaixo do peso\n");
        }
        else if (imc > 18.5 && imc < 25) {
            printf("\nClassificacao: normal\n");
        }
        else if (imc > 25 && imc < 30) {
            printf("\nClassificacao: sobrepeso\n");
        }
        else {
            printf("\nClassificacao: obesidade\n");
        }
        printf("\nDeseja calcular novamente? (1-sim/0-sair):\n");
        scanf("%d", &continuar);
    }
    printf("\nObrigado por utilizar nossa calculadora de IMC! Volte sempre!\n");
    return 0;
}