#include<stdio.h>
#include<math.h>

/*
Exercício 1 - Estrutura "Ponto":
Crie uma estrutura chamada "Ponto" que represente um ponto no plano cartesiano 
com coordenadas x e y. Em seguida, implemente uma função para calcular a distância entre dois pontos
*/

struct Ponto{
    
float x;
float y;    

}Ponto;


float calcularDistancia(float x1, float x0, float y1, float y0){
float Distancia;
float DistanciaX;
float DistanciaY;

DistanciaX = x1 - x0;
DistanciaY = y1 - y0;

Distancia = sqrt(pow(DistanciaX,2)+ pow(DistanciaY,2));

return Distancia;
}
int main (){

float distancia;

struct Ponto Ponto1;
struct Ponto Ponto2;


printf("Digite as coordenadas X e Y do Ponto 1: ");
scanf("%f %f",&Ponto1.x,&Ponto1.y);

printf("Digite as coordenadas X e Y do Ponto 2: ");
scanf("%f %f",&Ponto2.x,&Ponto2.y);

distancia = calcularDistancia(Ponto1.x, Ponto2.x, Ponto1.y, Ponto2.y);

printf("A distancia entre os dois pontos eh %.2f", distancia);

return 0;
};
