#include <stdio.h>
int main(){
//Ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira entre eles.
int x;
int y;
scanf("%d", &x);
scanf("%d", &y);
int resto;
int quoci;   
quoci = x / y;
resto = quoci % 2;
printf("%d, %d", resto, quoci);
return 0;
}