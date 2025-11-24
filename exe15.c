//Elabore um programa que calcule a área de um trapézio.
#include <stdio.h>
int main() {
    float base_maior, base_menor, altura, area;

    printf("Digite o valor da base maior: ");
    scanf("%f", &base_maior);

    printf("Digite o valor da base menor: ");
    scanf("%f", &base_menor);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;

    printf("A area do trapezio e: %.2f\n", area);

    return 0;
}