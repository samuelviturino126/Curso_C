/* Exercício 1 - Estrutura "Ponto":
Crie uma estrutura chamada "Ponto" que represente um ponto no plano cartesiano com coordenadas x e y.
 Em seguida, implemente uma função para calcular a distância entre dois pontos. */
 #include <stdio.h>
 #include <math.h>
 struct Ponto{
    float x;
    float y;
 };
float distanciaX(float a,float b){
float resultado;
resultado = a - b;
if(resultado<0){
    resultado = resultado * -1;
    return resultado;
}else{
    return resultado;
}}
float distanciaY(float a,float b){
    float resultado;
resultado = a - b;
if(resultado<0){
    resultado = resultado * -1;
    return resultado;
}else{
    return resultado;
}}
int main(){
   struct Ponto Ken; //aqui estou criando a variavel Ken que e um ponto
   struct Ponto Barbie; //aqui estou criando a variavel Barbie que e um ponto
   float dx, dy;
   printf("Coordenadas X e Y do Ken:");
   scanf("%f %f", &Ken.x, &Ken.y);
    printf("Coordenadas X e Y do Barbie:");
   scanf("%f %f", &Barbie.x, &Barbie.y);
dx = distanciaX(Ken.x, Barbie.x); //chamei a funcao distanciaX 
dy = distanciaY(Ken.y, Barbie.y); //chamei a funcao distanciaY
 float distancia;
 distancia = sqrt((dx*dx)+(dy*dy));
 printf("A distancia eh: %f", distancia);
return 0;
}
