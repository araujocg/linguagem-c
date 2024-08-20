#include <stdio.h>
#include <string.h>

struct Aluno{
    char nome[50];
    int idade;
    float mediaNotas;
};

int main(){

    struct Aluno Aluno01;

    strcpy(Aluno01.nome, "João");

    Aluno01.idade = 23;
    Aluno01.mediaNotas = 6.7;
    
    printf("Nome: %s\n", Aluno01.nome);
    printf("Idade: %d\n", Aluno01.idade);
    printf("Media das notas: %.2f\n", Aluno01.mediaNotas);

    return 0;
}