#include <stdio.h>
#include <stdlib.h>

//escreva um programa que leia um numero inteiro positivo e imprima todos numeros primos menores que ele
int primo(int k){
int i;
for(i=2;i<k;i++){
    if(k % i == 0){  
    return 0;      
    }
    }
    return k;
}

int main(){
int n, j;
int i; 
printf("Digite um numero inteiro: "); scanf("%d", &n);
//lendo um numero inteiro
for(i=3;i<n;i++){
j = primo(i);
if(j!=0){
printf("%d, ", j);
}}
return 0;
}