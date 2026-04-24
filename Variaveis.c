#include <stdio.h>

int main() {
    //Declarando e iniciando variáveis
    int idade = 23;
    float altura = 1.70;
    float peso = 69.95;
    char nome[20] = "Henrique";
    //Alterando os valores
    idade = 25;
    altura = 1.75;
    peso = 60.00;
    //saida de dados
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f\n", peso);
    printf("Nome: %s\n", nome);

    return 0;
}