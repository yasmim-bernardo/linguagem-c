//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).
#include <stdio.h>

int main(){

    float deposito , taxa_juros , rendimento , valor_total;

    printf("Digite um valor de deposito:");
    scanf("%f",&deposito);

    printf("Digite o valor da taxa de juros:");
    scanf("%f",&taxa_juros);

    rendimento = deposito * (taxa_juros / 100);
    valor_total = deposito + rendimento;

    printf("O valor do rendimento e: %.2f\n",rendimento);
    printf("O valor total e: %.2f\n",valor_total);

    return 0;
}