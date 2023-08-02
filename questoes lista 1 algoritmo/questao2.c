#include <stdio.h>
float media(float v1,float v2,float v3){
    float v4 = (v1+v2+v3)/3;
 return v4;
}
int main(){
    float a, b, c, d;
    printf("digite a primeira nota:");
    scanf("%f", &a);
    printf("digite a segunda nota:");
    scanf("%f", &b);
    printf("digite a terceira nota:");
    scanf("%f", &c);
    d = media(a,b,c);
     printf("Sua media e: %.2f", d);
     printf("\n");
    if(d<5){
        printf("Reprovado");
    }
    else{
        if(d<7){printf("Aprovado por nota");}
        else{
            printf("Aprovado");}
            }
return 0;}