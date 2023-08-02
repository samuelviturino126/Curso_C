#include <stdio.h>

int main(){

int numero;
int sucessor;
printf("Digite um numero para seu sucessor ser lido:");
scanf("%d", &numero);

sucessor = numero + 1;

printf("O sucessor do numero eh: %d", sucessor);

return 0;
}