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
int main(){
float num1, num2, num3;
float ven1, ven2, ven3;
float perd1, perd2, perd3;
printf("Digite os tres numeros usando espacos entre cada numero(nao digite numeros repetidos):");
scanf("%f %f %f", &num1, &num2, &num3);  
ven1 = maior(num1, num2); //maior entre 1 e 2 
perd1 = menor(num1, num2); //menor entre 1 e 2  
ven2 = maior(ven1, num3); //maior entre (12) e 3  
perd2 = menor(ven1, num3);//maior entre (12) e 3  
//talvez não precisemos no if
if(ven1==ven2){ //nesse if comparamos o numero 3 e o perdedor entre(1 e 2), pois o vencedor se repete em ven2
    ven3 = maior(perd1, perd2);
    perd3 = menor(perd1, perd2);
    printf("Do maior para o menor: %f, %f, %f", ven1, ven3, perd3);
}else{
    printf("Do maior para o menor: %f, %f, %f", ven2, perd2, perd1);
}
return 0;
}
/* Guilherme resolveu com um loop de achar o maior e o menor, muito interessante*/