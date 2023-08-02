/* 

Ler dois valores do teclado na forma de números reais, calcular e imprimir na tela:

    A soma destes valores

    O produto deles

    O quociente entre eles

*/
#include <stdio.h>
int main(){
float v1, v2;
printf("digite o primeiro valor:");
scanf("%f", &v1);
printf("digite o segundo valor:");
scanf("%f", &v2);
float soma, produto;
float quociente1, quociente2;
soma = v1 + v2;
produto = v1 * v2;
if(v2 == 0){
    printf("a soma entre eles e  = %f, o produto entre eles e %f, como v2 = 0, a divisao v1/v2 nao existe e v2/v1 = 0", soma, produto);
} else{
    if(v1 == 0){printf("a soma entre eles e  = %f, o produto entre eles e %f, como v1 = 0, a divisao v2/v1 nao existe e v1/v2 = 0", soma, produto);}
else{ quociente1 = v1/v2; quociente2 = v2/v1;
    printf("a soma entre eles e  = %f, o produto entre eles e %f, v1/v2 = %f, v2/v1 = %f", soma, produto, quociente1, quociente2);
    return 0;
}}
}