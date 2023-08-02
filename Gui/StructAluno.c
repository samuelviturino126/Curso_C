#include<stdio.h>
#include<stdlib.h>
struct Aluno{

char nome[50];
int idade;
float nota;

}Aluno;

int main (){

struct Aluno Guilgs;

printf("Digite o nome do aluno: ");
fgets(Guilgs.nome,50,stdin);

printf ("Digite a idade do aluno: ");
scanf("%d", &Guilgs.idade);

printf("Digite a nota do aluno: ");
scanf("%f", &Guilgs.nota);

printf("Nome: %s \n Idade: %d \n Nota: %.2f", Guilgs.nome, Guilgs.idade,Guilgs.nota);


return 0;
}