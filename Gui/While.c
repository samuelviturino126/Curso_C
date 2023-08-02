#include <stdio.h>

int main(){

int incremento = 0;
int negativo;

while(incremento < 500){

incremento = incremento + 1;
negativo = incremento * -1;

printf("%d", negativo);
printf("\n");

};


return 0;

}