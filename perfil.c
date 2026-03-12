#include <stdio.h>
int main () {
    int idade = 22;
    float altura = 1.86;
    char inicial = 'R';
    int ano_atual = 2026;
    int ano_nasc;
    ano_nasc = ano_atual - idade;
    printf("Inicial: %c\n", inicial);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %f\n", altura);
    printf("Ano de nascimento aproximado: %d\n", ano_nasc);
    return 0;
}