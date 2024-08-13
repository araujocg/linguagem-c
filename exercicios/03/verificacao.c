#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char name[100], assistentQuest[3];
    int numberTicket, age;
    bool assistent = false;

    printf("Digite o nome do Passageiro... : ");
    scanf("%s", name); // Leitura de string

    printf("Digite a idade...: ");
    scanf("%d", &age);

    printf("Digite o número do bilhete...: ");
    scanf("%d", &numberTicket);

    printf("O Passageiro necessita de uma assistência especial : ");
    scanf("%s", &assistentQuest);

    if (strcmp(assistentQuest, "nao") == 0){
        assistent = true;
    }

    printf("O embarque do passageiro está: %s\n", assistent? "APROVADO" : "NEGADO");

    return 0;
}