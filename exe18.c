//Construa um programa que receba a idade de uma pessoa e identifique sua classe eleitoral: não eleitor (menor que 16 anos de idade), eleitor obrigatório (entre 18 e 65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos).
#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if( idade < 16){
        printf("nao eleitor (menor que 16 anos de idade)\n");

    }else if(idade >= 18 && idade <=65){
        printf("eleitor obrigatorio (entre 18 e 65 anos)\n");

    }else{
        printf("eleitor facultativo (entre 16 e 18 anos e maior que 65 anos)\n");
    }
    
    return 0;

}