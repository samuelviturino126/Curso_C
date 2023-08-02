#include <stdio.h>

int main(void){
int *p;
int vari;
int y;

p = &vari;
printf("%p", p);
//aqui vai mostrar o endereço da variavel
scanf("%d", &vari);
printf("\n O valor e: %d", *p);
y = *p; //y recebe o valor armazenado no endereço de memória que p está guardando
return 0;
}
