#include <stdio.h>


float media3(float a, float b, float c){

float media;

media = (a + b + c)/3;

return media;
}

int main(){

double p1;
double p2;
double p3;
double media;

printf("Quanto esse caba tirou na P1:");
scanf("%f", &p1);

printf("Quanto esse caba tirou na P2:");
scanf("%f", &p2);

printf("Quanto esse caba tirou na P3:");
scanf("%f", &p3);

media = media3(p1,p2,p3);

if(media >= 7){

printf("Aprovado");

}else if (media >= 5 && media < 7)
{
printf("Aprovado por nota, com media %.2f", media);
}else if (media >= 3 && media < 5)
{
printf("O caba tá de P4, com media %.2f", media);
}else if (media < 3 )
{
printf("Reprovado direto, com media %.2f", media);
}

return 0;
};