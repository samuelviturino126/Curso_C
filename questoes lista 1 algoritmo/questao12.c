//Ler 2 números inteiros do teclado. Se o segundo for diferente de zero, calcular e i
//mprimir o quociente do primeiro pelo segundo. Caso contrário, imprimir a mensagem: "DIVISÃO POR ZERO"
#include <stdio.h>
int main(){
    float n1; float n2;
    float resultado;
    printf("Digite os dois numeros:");
    scanf("%f", &n1); scanf("%f", &n2);
    if(n2!=0){
        resultado = n1/n2;
        printf("%f", resultado);
    }else{printf("Divisao por 0!");
    return 0;}
}