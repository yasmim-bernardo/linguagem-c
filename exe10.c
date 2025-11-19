#include <stdio.h> 
#include <stdlib.h> 
int main(){
    int idade;
    char nome[30];

    printf("Digite seu nome: ");
    scanf("%29s",nome);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("\nSeu nome e: %s",nome);
    
    printf("\nSua idade e: %d",idade);
    printf("\n--------------------------------------------------");
    
if (idade >=18){
        printf("\nOla %s, Voce e maior de idade",nome);
        printf("\n voce ja pode tirar sua carteira de motorista!");      
    }else {
        printf("\nOla %s, Voce e menor de idade.",nome);
        printf("\nVoce ainda nao pode tirar sua carteira de motorista!");
    }




    return 0;
}