#include <stdio.h>
int main(){
    float a,b,c;
    printf("digite os 3 numeros desejados: ");
    scanf("%f%f%f", &a, &b, &c);
    float soma = b + c;
if(a > soma){
    printf("O primeiro valor e maior que a soma dos outros dois, veja: %f > %f", a, soma);   
} else{
    if(a==soma){printf("o primeiro valor e igual a soma dos outros dois, veja: %f = %f", a, soma);}else{
printf("O primeiro valor e menor que a soma dos outros dois, veja %f < %f", a, soma); }}
return 0; }