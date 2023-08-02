#include <stdio.h>
#include <stdlib.h> //necessária para a função malloc
int tamanho;

int main(){
int *variavel;
//abaixo, nós chamamos a função malloc e o sizeof(int) é porque nosso ponteiro é 
//para inteiros
scanf("%d", &tamanho);
variavel = (int *)malloc(tamanho * sizeof(int)); //aqui nós armazenamos 17 elementos do tipo int
//que precisamos alocar
if(variavel == NULL){
printf("Nao conseguiu alocar memoria");
exit(1);}
//acima, fechamos o programa se a memoria não for alocada
//mas fechamos pq o intuito do programa teste é esse, mas se fosse outro nao precisava
printf("[");
for(int i=0;i<(tamanho-1);i++){
variavel[i] = rand() % 10;
printf("%d, ", variavel[i]);
}
variavel[tamanho-1] = 5;
printf("%d]", variavel[tamanho-1]);
free(variavel);
//"Para todo malloc, um free" é oque meu professor sempre falava
//e isso eu vou falar pra vocês porque é muiito importante
return 0;
}
//execute o programa e veja como ele funciona você mesmo