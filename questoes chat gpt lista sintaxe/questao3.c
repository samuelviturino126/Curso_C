#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Escreva um programa em C que leia um número inteiro positivo 
//e verifique se esse número é um número de Armstrong (narcisista).
//Um número de Armstrong é aquele cuja soma dos seus dígitos elevados à uantidade de dígitos é 
//igual ao próprio número. 
//Por exemplo, 153 é um número de Armstrong porque 1^3 + 5^3 + 3^3 = 153.
int arms(int n){
int casas = 0; //contador
while(n>=1){ //enquanto o numero for maior que 1 vai rolando
    n = n / 10; //vou dividindo dele por 10 a cada loop
    casas = casas + 1; //aqui eu conto quantos loops foram
}return casas;} //descubro quantas casas rodaram
int main(void){
int numero, cont;
printf("Digite um numero:\n");
scanf("%d", &numero);
int numero_contador = numero;
cont = arms(numero_contador); //descubro a quantidade de caracteres dele
printf("Tem %d Casas\n", cont); //testando se ta certo
int *vetor; //para a matriz
int i, total; //i para o loop e o total vai ser a soma de tudo
int cont2; //pra salvar o total direitinho
vetor = (int *)malloc(cont * sizeof(int)); //realizo a alocação dinamica 
for(i=0;i<cont;i++){
   vetor[i] = numero % 10;
   //como estou salvando o resto, o primeiro elemento do vetor é o ultimo elemento do nosso número
  numero = numero / 10;
}
printf("O vetor 5 eh: %d", vetor[1]);
cont2 = 0;
for(i=0;i<cont;i++){
    total = pow(vetor[i], cont)+0.5;
    printf("\n");
    printf("A soma de tudo antes: %d do %d loop", cont2, i+1);
    cont2 = total + cont2;
    printf("\nA soma de tudo depois: %d do %d loop", cont2, i+1);
}
printf("\nA soma de tudo eh: %d, se for igual ao numero digitado seu numero eh um numero de Armstrong seu desocupado.", cont2);
    
free(vetor);

return 0;
}

