#include <stdio.h>

int main(){

int a;
float b;
char c;
int numeroDigitado;

a = 10;
b = 0.25;
c = 'g';

printf("Digite um numero:");
scanf("%d", &numeroDigitado);

if(numeroDigitado < 0){

printf("O numero transformado em negativo é: %d", numeroDigitado);

}else{
numeroDigitado = numeroDigitado *-1;
printf("O numero transformado em negativo é: %d", numeroDigitado);
}


/*   
printf("%d" , a);
printf("\n");
printf("%.2f" , b);
printf("\n");
printf("%c" , c);
 */

return 0;
}