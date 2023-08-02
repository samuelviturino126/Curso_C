#include <stdio.h>
int main(){
    printf("Digite o preco da carteira:");
    float carteira; float preco;
    scanf("%f", &carteira);
    preco = carteira/20;
    printf("Digite a quantidade de anos que voce fuma:");
    float anos; float dias;
    scanf("%f", &anos);
    dias = anos * 365;
    float cigarros;
    printf("Digite quantos cigarros voce fuma por dia:");
    scanf("%f", &cigarros);
    float total;
    total = cigarros*preco*dias;
    printf("Você gastou:%.4f de reais na sua vida com cigarro", total);
    return 0;
}