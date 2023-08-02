#include <stdio.h>
int main(){
    float latao;
    float cobre, zinco;
    printf("digite a quantidade de latão que você quer:");
    scanf("%f", &latao);
    cobre = latao * 0.3;
    zinco = 0.7 * latao;
    printf("Você vai precisar de %f de cobre e %f de zinco", cobre, zinco);
    return 0;
}