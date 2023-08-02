#include <stdio.h>
int main(){
       float raio;
    float altura;
    printf("digite o raio:");
    scanf("%f", &raio);
    printf("digite a altura:");
    scanf("%f", &altura);
    float area;
    float volume;
    area = (2 * 3.14 * raio) * (raio + altura);
    volume = raio*raio*altura*3.14;
    printf("A area do cilindro eh: %f \n", area);
    printf("O volume eh: %f \n", volume);
return 0;
}