#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa em C que leia uma sequência de números inteiros do usuário 
e exiba o maior e o menor número da sequência.
*/
int main(){
    int i, *qntnumeros;
    int maior, menor;
    int numeros;
printf("Quantos numeros voce tem ai?");
scanf("%d", &numeros);
qntnumeros = malloc(numeros * sizeof(int));
for(i=0;i<numeros;i++){
    printf("Digite o %d numero:", i+1);
    scanf("%d", &qntnumeros[i]);
}
maior = qntnumeros[0];

for(i=0;i<numeros;i++){
if(maior<qntnumeros[i]){
    maior = qntnumeros[i];
}else{maior = maior;}
}

menor = qntnumeros[0];

for(i=0;i<numeros;i++){
if(menor>qntnumeros[i]){
    menor = qntnumeros[i];
}else{menor = menor;}
}
free(qntnumeros);
printf("\nO numero maior eh: %d e o numero menor eh: %d", maior, menor);
}