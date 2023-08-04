/*
Escreva um programa em C que leia um vetor de números inteiros e exiba a soma de todos os elementos do vetor.
*/


#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vetor;
    int soma = 0;
    int elementos;
printf("Digite o numero de elementos que voce quer:");
scanf("%d", &elementos);
    vetor = malloc(elementos * sizeof(int));

for(int i=0;i<elementos;i++){
    printf("digite o valor do %d elemento:", i+1);scanf("%d", &vetor[i]);}
    for(int i=0;i<elementos;i++){
    soma = vetor[i] + soma;
}
printf("A soma eh: %d", soma);
free(vetor);
return 0;

}