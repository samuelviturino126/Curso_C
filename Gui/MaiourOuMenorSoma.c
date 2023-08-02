#include<stdio.h>

//Ler 3 números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois.

int main (){
//Leitura dos 3 numeros, são reais então utiliza-se declaração float

float a,b,c;

printf("Digite o primeiro numero: ");
scanf("%f",&a);

printf("\n");

printf("Digite o segundo numero: ");
scanf("%f",&b);

printf("Digite o terceiro numero: ");
scanf("%f",&c);

// O objetivo é verificar se o primeiro eh maior que a soma, entao precisamos criar a soma

float soma;

soma = b + c;

if(a > soma){

printf("O primeiro numero eh %f",a);
printf("E a soma dos outros dois eh %f",soma);
printf("Portanto o primeiro numero eh maior");

}else{

printf("A soma dos dois ultimos numeros eh maior ou igual o primeiro");

}

return 0;


}