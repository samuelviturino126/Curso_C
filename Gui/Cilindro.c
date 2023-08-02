#include <stdio.h>

int main(){

float altura;
//float diametro;
float raio;
float pi = 3.14;
float area;
float volume;

printf("Digite a altura do cilindro: ");
scanf("%f", &altura);

printf("Digite o raio do cilindro: ");
scanf("%f",&raio);

//diametro = 2*raio;
area = 2 * pi * raio * altura;
volume = pi * raio * raio * altura;


printf("A área do cilindro é %.2f",area);
printf("\n");
printf("O volume do cilindro é %.2f", volume);

return 0;
}