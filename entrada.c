#include <stdio.h>

int main() {
    //Variaveis
    int idade, matricula;
    float altura, peso;
    char nome[20];

    //Entrada de dados
    printf("Digite seu idade: \n");
    scanf("%d", &idade);

    printf("Digite seu nome: \n");
    scanf("%s", nome);
    
    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    //Saida de dados
    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d - Sua matricula é: %d\n", idade, matricula);
    printf("Sua altura é: %.2f - e peso: %.2f\n", altura, peso);
    
    return 0;
}