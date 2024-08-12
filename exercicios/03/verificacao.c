#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char name[100];
    char approval[10];  // Alterado para armazenar "APROVADO" ou "NEGADO"
    int numberTicket, age;
    bool assistent; 

    printf("Digite o nome do Passageiro... : ");
    scanf("%s", name);  // Leitura de string

    printf("Digite a idade...: ");
    scanf("%d", &age);

    printf("Digite o número do bilhete...: ");
    scanf("%d", &numberTicket);

    printf("O Passageiro necessita de uma assistência especial (1 para sim, 0 para não): ");
    int assistentInput;
    scanf("%d", &assistentInput);  // Leitura como inteiro
    assistent = assistentInput != 0;  // Conversão para bool

    // Atribuição correta usando o operador ternário
    strcpy(approval, (age > 18 && assistent) ? "APROVADO" : "NEGADO");

    printf("O embarque do passageiro está: %s\n", approval);

    return 0;
}