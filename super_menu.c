#include <stdio.h>
int main () {
int opcao;
    do {
        printf("\n---SUPER MENU DE FERRAMENTAS---\n");
        printf("\n1 - Calcule uma media aritmetica:\n");
        printf("\n2 - Conversor de medidas: \n");
        printf("\n3 - Calculadora de IMC (indice de massa corporal)\n");
        printf("\n4 - Verificador de numero par ou impar\n");
        printf("\n5 - Calculadora de media ponderada\n");
        printf("\n0 - Sair do programa\n");
        printf("\nEscolha uma opcao:\n");
        scanf("%d", &opcao);

        switch (opcao) {  
            case 1: {
            printf("\nIniciando calculadora de media aritmetica:\n");
            int continuar = 1;
            float n1, n2, media;
            while (continuar == 1){ //implantado loop na calculadora de media
            printf("\nDigite a nota 1:\n");
            scanf("%f", &n1);
            printf("\nDigite a nota 2:\n");
            scanf("%f", &n2);
            media = (n1 + n2) / 2;
            printf("\nSua media sera: %.2f", media);
            

            printf("\nDeseja calcular outra media aritmetica? (1-sim/0-sair)\n");
            scanf("%d", &continuar);
            }
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

            case 3: {
            while (continuar == 1); // implantada a calculadora de IMC no super menu   
                printf("\nIniciando a Calculadora de IMC - indice de massa corporal\n");
                float peso, altura;
                printf("\nDigite aqui seu peso em kg:\n");
                scanf("%f", &peso);
                printf("\nDigite aqui sua altura em metros:\n");
                scanf("%f", &altura);
                float imc;
                imc = peso / (altura * altura);
                printf("Seu imc sera %.2f", imc);

                if (imc < 18.5) {
                    printf("\nClassificacao: abaixo do peso\n");
                }
                else if (imc > 18.5 && imc < 25) {
                    printf("\nClassificacao: peso normal\n"); 
                }
                else if (imc > 25 && imc < 30) {
                    printf("\nClassificacao: sobrepeso\n");
                }
                else {
                    printf("\nClassificacao: obesidade\n");
                }
            printf("\nDeseja calcular novamente o IMC? (1-sim/0-sair)\n");
            scanf("%d", &continuar);

            printf("\nObrigado por utilizar nossa calculadora de IMC!\n");
            }
            break;

            case 4: {
                printf("\nIniciando a verificacao de numeros pares e impares\n"); //adicionado verificador de impar e par
                int numero;
                int continuar = 1;

                while (continuar == 1) {
                    printf("\nDigite qualquer numero inteiro da sua preferencia aqui:\n");
                    scanf("%d", &numero);

                    if (numero % 2 == 0) {
                        printf("\nO numero %d e par!\n", numero);
                    }
                    else {
                        printf("\nO numero %d e impar!\n", numero);
                    }

                    printf("\nDeseja verificar outro numero? 1-sim/0-voltar:");
                    scanf("%d", &continuar);
                }
                break;
            }
            case 5: {
                printf("\nIniciando a calculadora de media ponderada\n"); //adcionada calculadora de media ponderada - com pesos
                float n1, n2, media;
                int peso1, peso2;
                int continuar = 1;

                while (continuar == 1) {
                    printf("\nDigite a primeira nota:\n");
                    scanf("%f", &n1);
                    printf("\nDigite o peso da primeira nota:\n");
                    scanf("%d", &peso1);
                    printf("\nDigite a segunda nota:\n");
                    scanf("%f", &n2);
                    printf("\nDigite o peso da segunda nota:\n");
                    scanf("%d", &peso2);
                    media = ((n1 * peso1) + (n2 * peso2)) / (peso1 + peso2);
                    printf("\nSua media ponderada sera %.2f", media);

                    printf("\nDeseja calcular outra media ponderada? (1-sim/0-nao)\n");
                    scanf("%d",&continuar);
                
                }
                break;
            }

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