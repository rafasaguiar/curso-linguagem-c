#include <stdio.h>
int main () {
    int idade;
    float altura;
    int continuar = 1;
    while (continuar == 1) {
    printf("\n--- Novo cadastro de aluno ---\n");
    printf("Digite a altura:");
    scanf("%f", &altura);
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    if(idade >= 18) {
        printf("Acesso liberado ao curso avancado.\n");
    }
    else if(idade == 17) {
        printf("Falta 1 ano para seu acesso ser liberado");
    }
    else if(idade < 17) {
        printf("Acesso negado ao curso avancado");

    }
    printf("\nDeseja cadastrar um novo usuario? (1-sim / 0-sair)\n");
    scanf("%d", &continuar); 
}
printf("\nSistema encerrado, obrigado. Ate a proxima!\n");
    return 0;
}
