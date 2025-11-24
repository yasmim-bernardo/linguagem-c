//Escreva um programa que receba dois números, calcule e apresente o resultado do primeiro número elevado ao segundo.

#include <stdio.h>
#include <math.h>   

 int main(){
    float base , expoente , resultado;

    printf("Digite o valor da base : ");
    scanf("%f",&base);

    printf("Digite o valor do expoente: ");
    scanf("%f",&expoente);

    resultado = pow(base,expoente);

    printf("%.2f elevado a %.2f e igual a %.2f\n",base,expoente,resultado);


    return 0;
 }