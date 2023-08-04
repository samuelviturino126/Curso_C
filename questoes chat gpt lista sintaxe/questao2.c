//Escreva um programa em C que leia um número inteiro positivo e calcule o fatorial desse número.
#include <stdio.h>

int fatorial(int i){
    int contador = 1;
    int total = i;
    for(contador=1;contador<i;contador++){
        total = total * contador;
    }
return total;
}
int main(){
    int numero;
    printf("Digite o numero:");scanf("%d", &numero);
    printf("%d", fatorial(numero));
    return 0;
}