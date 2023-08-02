#include <stdio.h>


int soma(int a, int b){

int soma;
soma = a + b;

 return soma;
}

int main(){

int a;
int b;
int resultado;

printf("Digite o primeiro numero a ser somado:");
scanf("%d", &a);
printf("Digite o segundo numero a ser somado:");
scanf("%d", &b);

resultado = soma(a,b);

printf(" O resultado da soma é: %d", resultado);


return 0;

};
