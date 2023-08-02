#include <stdio.h>

int main(){

//Calcular a quantidade dinheiro gasta por um fumante.
// Dados: o número de anos que ele fuma, o nº de cigarros fumados por dia e o preço de uma carteira.

int numeroAnos;
float precoCarteira;
int numeroCigarros;
int diasAno;
int diasExtras;
float precoUnitario;
float valorGasto;

printf("Há quantos anos ele fuma ?:");
scanf("%d", &numeroAnos);

printf("Quantos cigarros por dia?");
scanf("%d", &numeroCigarros);

printf("Preço médio da carteira");
scanf("%f", &precoCarteira);

precoUnitario = precoCarteira/20;
diasExtras = numeroAnos/4;
diasAno = (numeroAnos * 365) + diasExtras;
valorGasto = diasAno * precoUnitario * numeroCigarros;

printf("O valor gasto total foi de %.2f R$",valorGasto);

return 0;
}