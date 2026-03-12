#include <stdio.h>
int main () {
    int idade;
    float altura;
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Digite a sua altura:");
    scanf("%f", &altura);
    printf("\n--- Dados Coletados ---\n");
    printf("Voce tem %d anos e mede %.2f de altura", idade, altura);
    return 0;
}