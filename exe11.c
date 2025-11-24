#include <stdio.h>
#include <stdlib.h>

//11. Faça um programa que leia um número inteiro e imprima o seu antecessor e o seu sucessor.
int main(){
    int numero , ant ,suc;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);


    ant=numero - 1;
    suc=numero + 1;

    printf("\nO antecessor de %d e: %d", numero,ant);
    printf("\nO sucessor de %d e : %d", numero,suc);




return 0;
}
