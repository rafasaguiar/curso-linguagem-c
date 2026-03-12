#include <stdio.h>
int main () {
    int idade;
    float altura;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Digite a sua altura:");
    scanf("%f", &altura);
    if(idade >= 18) {
        printf("Acesso liberado ao curso avancado\n");
    }
    else if(idade == 17) {
        printf("Falta 1 ano para liberar seu acesso\n");
    }
    else if(idade <17) {
        printf("Acesso nao liberado a menores de idade\n");
    }
    if(altura < 1.50) {
        printf("Atencao: procure um medico para consultar seu desenvolvimento");
    }
    return 0;
}