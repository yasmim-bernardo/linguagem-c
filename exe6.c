#include <stdio.h>
int main() {
   int  i , n ;
   float valor, soma=0;
    printf("Quantos produtos deseja registrar? ");
    scanf("%d", &n);

    for (i = 1 ; i <= n; i++) {
        printf("Digite o valor do produto %d: ", i);
        scanf("%f", &valor);
        soma += valor;
    }
    printf("O valor total da compra e: R$ %.2f\n", soma);
    return 0;
}