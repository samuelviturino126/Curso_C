#include <stdio.h>
float maior(float a, float b){
if(a>b){
 return a;
} 
else{
return b;
}}
float menor(float a, float b){
    if(a<b){
        return a;
    }else{return b;}
}
//5, 4, 2
int main(){
float num1, num2, num3;
float ven1, ven2;
float perd1, perd2;
printf("Digite os tres numeros(nao digite numeros repetidos):");
scanf("%f", &num1);scanf("%f", &num2);scanf("%f", &num3);     
ven1 = maior(num1, num2); //maior entre 1 e 2 ven1 = 5.
perd1 = menor(num1, num2); //menor entre 1 e 2  perd1 = 4.
ven2 = maior(ven1, num3); //maior entre (12) e 3  ven2 = 5.
perd2 = menor(ven1, num3);//maior entre (12) e 3    ven2 = 2.
//talvez não precisemos no if
if(ven1==ven2){ //nesse if comparamos o numero 3 e o perdedor entre(1 e 2), pois o vencedor se repete em ven2
    ven3 = maior(perd1, perd2);
    perd3 = menor(perd1, perd2);
    printf("%f", ven1);
}else{
    printf("%f", ven2);
}
return 0;
}