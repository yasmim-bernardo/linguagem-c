//Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a idade e o valor da mensalidade do plano de saúde. A tabela a seguir apresenta os valores de mensalidade:
/*Até 18 anos	    R$ 50,00
De 19 a 29 anos	    R$ 70,00
De 30 a 45 anos	    R$ 90,00
De 46 a 65 anos  	R$ 130,00
Acima de 65 anos    R$ 170,00*/
#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    float valor;

    printf("Digite seu nome : ");
    scanf("%49s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade<=18){
        valor=50.00;
    }else if(idade>=19 && idade <=29){
        valor =70.00;
    }else if(idade >= 30 && idade <=45){
        valor =90.00;
    }else if(idade >=46 && idade <=65){
        valor = 130.00;
    }else{
        valor = 170.00;
    }
    printf("\nNome : %s \nIdade: %d \nValor da mensalidade: R$ %.2f", nome, idade , valor);
    
    

   return 0;
}


