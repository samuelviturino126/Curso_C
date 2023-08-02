#include<stdio.h>

int main(){

float soma;
float produto;
float quociente;
float a;
float b;

printf("Digite o primeiro numero:");
scanf("%f", &a);

printf("Digite o segundo numero:");
scanf("%f", &b);

soma =  a + b;
produto = a*b;
quociente = a/b;

printf("A soma entre ambos os numeros eh: %.2f", soma);
printf("\n");
printf("O produto entre ambos os numeros eh: %.2f", produto);
printf("\n");
printf("E o quociente entre ambos os numeros eh: %.2f", quociente);
return 0;
}