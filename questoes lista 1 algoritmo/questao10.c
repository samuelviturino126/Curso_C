#include <stdio.h>
float multa(float veloci, float permi){
    float valor = veloci - permi;
    float muta;
    if(valor==0){
muta = 0;
    } else{ if(valor<=10){muta = 50.00;}else{if(valor<=30){muta = 100.00;}
    else{muta = 200;}}}
    return muta;
}
int main(){
    float permitida, sua, preco;
    printf("Digite o valor da veolicidade permitida:");
    scanf("%f", &permitida);
    printf("Digite o valor da sua velocidade:");
    scanf("%f", &sua);
    preco = multa(sua, permitida);
    printf("O valor e: %f", preco);
    return 0;
}