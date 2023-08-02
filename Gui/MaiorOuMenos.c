#include<stdio.h>

/*

Ler 2 números inteiros do teclado (A e B), 
verificar e imprimir qual deles é o maior, 
ou a mensagem "A=B" caso sejam iguais.

*/

int main (){
//Leitura dos 2 numeros, são reais então utiliza-se declaração float

// Se a > b, portanto a - b = +
//se a < b, portanto a - b = -

float a,b;

printf("Digite o primeiro numero: ");
scanf("%f",&a);

printf("\n");

printf("Digite o segundo numero: ");
scanf("%f",&b);

// Se a > b, portanto a - b = +
//se a < b, portanto a - b = -

if(a > b){

printf("O primeiro numero eh %.2f, e eh maior",a);

}else if(b > a){

printf("O segundo numero eh %.2f, e eh maior",b);


}else if(a == b){

printf("Os dois são iguais");
}


return 0;

}