/*
Escreva um programa em C que leia uma matriz 3x3 de números inteiros e exiba a transposta dessa matriz.
*/
#include <stdio.h>
//uma dica é seguir o enunciado, faça um passo a passo saca? vamo ver como eu faço!
int main(){
//primeiro vou criar um programa que leia uma matriz 3x3, simbora!
int matriz[3][3]; //criada a matriz, agora vamo ler?
for(int i=0;i<3;i++){//i<3 pq eu to usando o primeiro i como 0 ta, primeiro a gente le as linhas
for(int j=0;j<3;j++){
    printf("digite o elemento [%d][%d] da sua matriz:", i+1, j+1);
    scanf("%d", &matriz[i][j]);//se liga, eu to rodando os elementos de j dentro de i, ai eu rodo j=0,1,2 e depois i muda pra 1,2,... entendeu?
//fiz o printf ali em cima pra ser visivel oq eu disse no comentario acima
}}
printf("\nsua matriz ficou assim:\n");
for(int i=0;i<3;i++){
    printf("[");
    for(int j=0;j<3;j++){
        //no bloco de baixo eh so pra deixar bonito 
        if(j==2){
            printf("%d", matriz[i][j]);
        }else{
printf("%d, ", matriz[i][j]); //troquei os elementos pra exibir a transposta
        }
    }
    printf("]\n");
}
printf("A transposta ficou assim:\n");
for(int i=0;i<3;i++){
    printf("[");
    for(int j=0;j<3;j++){
        //no bloco de baixo eh so pra deixar bonito 
        if(j==2){
            printf("%d", matriz[j][i]);
        }else{
printf("%d, ", matriz[j][i]); //troquei os elementos pra exibir a transposta
        }
    }
    printf("]\n");
}
return 0;
}