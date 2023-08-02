#include <stdio.h>
#include <stdlib.h> //necessária para a função malloc

int main(){
int *variavel;
//abaixo, nós chamamos a função malloc e o sizeof(int) é porque nosso ponteiro é 
//para inteiros
variavel = malloc(17 * sizeof(int)); //aqui nós armazenamos 17 elementos do tipo int
//que precisamos alocar
if(variavel == NULL){
printf("Nao conseguiu alocar memoria");
exit(1);}
//acima, fechamos o programa se a memoria não for alocada
//mas fechamos pq o intuito do programa teste é esse, mas se fosse outro nao precisava
for(int i=0;i<17;i++){
variavel[i] = 2;
printf("%d", variavel[i]);
}
free(variavel);
//"Para todo malloc, um free" é oque meu professor sempre falava
//e isso eu vou falar pra vocês porque é muiito importante
return 0;
}
//execute o programa e veja como ele funciona você mesmo