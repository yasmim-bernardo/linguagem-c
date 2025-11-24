//Faça um programa que leia um número e informe se ele é divisível por cinco.
#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 5 ==0){
        printf("Este numero e divisivel por 5.\n");

    }else{
        printf("Este numero nao e divisivel por 5.\n");
    }



    return 0;

}