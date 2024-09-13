#include <stdio.h>
#include <string.h>

union Aluno{ // he just stores one values at a time
    char nome[50];
    int idade;
};

int main(){
    union Aluno Aluno01;

    strcpy(Aluno01.nome, "João");
    printf("Nome: %s\n", Aluno01.nome); // João

    Aluno01.idade = 23;
    printf("Idade: %d\n", Aluno01.idade); // 23
    
    printf("Nome: %s\n", Aluno01.nome); // erro

    return 0;
}