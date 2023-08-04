#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa em C que leia um número inteiro positivo 
e exiba os primeiros "n" números da sequência de Fibonacci
 onde "n" é o número digitado pelo usuário.*/
/* MEU DEUS EU RESOLVI ISSO MUITO RAPIDO E ESTOU MUITO FELIZZZ
GENTE, TENTEM FAZER ANTES DE OLHAR A RESPOSTA, DE VERDADE, ESSE É MUITO LEGALL*/
 int main(){
    int n;
    int *fibonacci;
    printf("digite a quantidade de elementos da sequencia de fibonacci que voce quer:\n");
    scanf("%d", &n);
    fibonacci = malloc(n * sizeof(int)); //aqui eu aloco um array, vocÊ vai entender!
    if(n>=2){ //se o usuario digitar mais de 2 elementos ou 2 ne, eu coloco os dois primeiros, pra poder somar o resto depois
        fibonacci[0] = 1;
        fibonacci[1] = 1; 
    }else{printf("1");/}//se ele só colocar 1 elemento, logico que a sequencia eh 1
    for(int i=2;i<n;i++){
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]; //olha o pulo do gato, cada elemento do meu array dinamico, vai sendo criado como a soma
    //dos dois anteriores!
    }
    for(int i=0;i<n;i++){
        printf("%d ", fibonacci[i]);
    }
    free(fibonacci);
    return 0;
 }