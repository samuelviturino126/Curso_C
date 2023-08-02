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

float a,b,c;

printf("Digite o primeiro numero: ");
scanf("%f",&a);

printf("\n");

printf("Digite o segundo numero: ");
scanf("%f",&b);

printf("Digite o terceiro numero: ");
scanf("%f",&c);

float valores[] = {a,b,c};
float maior;
float menor;
float meio;

int i = 0;

maior = valores[0];
for(i = 0; i< 3;i++){

    if(valores[i] > maior){
        maior = valores[i];
    }
}

menor = valores[0];

for(i = 0; i< 3;i++){
    if(valores[i] < menor){
        menor = valores[i];
    }
}

for(i = 0; i< 3;i++){
if(valores[i] > menor && valores[i] < maior){
        meio = valores[i];
    }
}


/*          
printf("O maior dos 3 valores eh %.2f", maior);
printf("/n");
printf("O menor dos 3 valores eh %.2f", menor);

*/


printf("A ordem crescente é: %.2f, %.2f , %.2f", menor,meio,maior);

return 0;
}