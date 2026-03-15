#include <stdio.h>
int main () {
int opcao;
    do {
        printf("\n---SUPER MENU DE FERRAMENTAS---\n");
        printf("\n1 - Calcule uma media aritmetica:\n");
        printf("\n2 - Conversor de medidas: \n");
        printf("\n0 - Sair do programa\n");
        printf("\nEscolha uma opcao:\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
            printf("\nIniciando calculadora de media aritmetica:\n");
            float n1, n2, media;
            printf("\nDigite a nota 1:\n");
            scanf("%f", &n1);
            printf("\nDigite a nota 2:\n");
            scanf("%f", &n2);
            media = (n1 + n2) / 2;
            printf("\nSua media sera: %.2f", media);
            break;
            }
            case 2: {
            printf("\nIniciando o conversor de medidas:\n");
            int escolha;
            int continuar = 1;
            float metros, resultado;

            while (continuar == 1) {
            printf("\n---Iniciando a calculadora conversora de medidas---\n");
            printf("\nDigite o valor em metros:\n");
            scanf("%f", &metros);
            printf("\nEscolha a opcao desejada:\n");
            printf("\n1 - Centimetros (m * 100)");
            printf("\n2- Milimetros (m * 1000)");
            printf("\n3 - Quilometros (m / 1000)");
            printf("\nSua escolha:\n");
            scanf("%d", &escolha);

                if (escolha == 1) {
                    resultado = metros * 100;
                    printf("\nResultado: %.2f metros em centimetros sera %.2f centimetros\n", metros, resultado);
                }
                else if (escolha == 2) {
                    resultado = metros * 1000;
                    printf("\nResultado: %.2f metros em milimetros sera %.3f milimetros\n", metros, resultado);
                }
                else if (escolha == 3) {
                    resultado = metros / 1000;
                    printf("\nResultado: %.2f metros em quilometros sera %.4f quilometros\n", metros, resultado);
                }
                else {
                    printf("\nOpcao invalida!");
                }
            printf("Deseja fazer outra conversao? (1-sim/0-nao)");
            scanf("%d", &continuar);
            break;

            case 0: {
                printf("\nSistema encerrado!\n");
                break;
            }    
            default:
            if (opcao != 0); {
                printf("Opcao invalida, tente novamente!");
            }
        }
        }
    }   
} while (opcao != 0);
return 0;
}