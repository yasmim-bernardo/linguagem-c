/*
    Escreva um algoritmo que receba duas notas de um aluno e calcule a média.
*/

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Cálculo da média
    media = (nota1 + nota2) / 2;

    // Exibição do resultado
    printf("A média é: %.2f\n", media);

    return 0;
}