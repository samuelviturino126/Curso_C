#include <stdio.h>
float imposto;
float lucro;
float custo;
int main(void){
    printf("Digite o custo de fabrica do carro:");
    scanf("%f", &custo);
    imposto = custo * 0.45;
    lucro = 0.12 * custo;
    float total;
    total = custo + lucro + imposto;
    printf("O preco do carro e: %.2f e os valores do imposto e lucro do distribuidor sao: %.2f e %.2f respectivamente", total, imposto, lucro);
    return 0;
}