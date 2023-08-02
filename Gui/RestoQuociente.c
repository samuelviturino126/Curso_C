#include <stdio.h>


float resto2(int a, int b){

float resto;

resto = a % b;

return resto;
}
float quociente2(int a, int b){

float quociente;
quociente = a/b;

return quociente;
}
int main(){

float resto;
float quociente;
int a;
int b;

printf("Digite o primeiro numero:");
scanf("%d", &a);

printf("Digite o segundo numero:");
scanf("%d", &b);

resto = resto2(a,b);
quociente = quociente2(a,b);

printf("O resto entre ambos os numeros eh: %.2f", resto);
printf("E o quociente entre ambos os numeros eh: %.2f", quociente);
return 0;
};