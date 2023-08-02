/* - Estrutura "Aluno":
Crie uma estrutura chamada "Aluno" que armazene informações sobre o nome, idade e nota de um aluno.
 Em seguida, implemente uma função para exibir os detalhes do aluno.
 */
#include <stdio.h>
#include <math.h>

struct Aluno{
    char nome[50];
    int idade;
    float nota;
};
void dados(struct Aluno aluno){
    printf("O nome dele eh: %s", aluno.nome);
    printf("A idade dele eh: %d", aluno.idade);
    printf("\n");
    printf("A nota dele foi: %f", aluno.nota);
     printf("\n");
} //Vai receber o parametro e executar oque esta dentro dela, retornando tudo que ta la! :)
int main(){
    struct Aluno Samuca;
    //Da pra preencher a estruct da mesma forma de um array, tipo {nome, idade, nota :O}
    printf("Digite o nome do aluno:");
    fgets(Samuca.nome, 50, stdin); //O fgets esta armazenando no meu espaço Samuca.nome, uma string de até 50 caracteres
    printf("Digite a idade do aluno:");
    scanf("%d", &Samuca.idade);
    printf("Digite a nota do aluno:");
    scanf("%f", &Samuca.nota);
    dados(Samuca);
    return 0;
}
