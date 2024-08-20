#include <stdio.h>
#include <string.h>

// strcpy: Copia o conteúdo de uma string para outra.
// strcat: Concatena duas strings, adicionando o conteúdo da string de origem ao final da string de destino.
// strlen: Retorna o número de caracteres em uma string (sem contar o caractere nulo \0)

int main(){

    /*------ strcat --------*/

    // char saudacao[] = "Ola, ";
    // char nome[30];

    // printf("Digite o seu nome: ");
    // scanf("%s", nome);

    // strcat(saudacao, nome);
    // printf("%s\n", saudacao); // "Ola, {nome}"

    /*------ strcpy --------*/

    // char copia[] = "";
    // char nome[30];

    // printf("Digite o seu nome: ");
    // scanf("%s", nome);

    // strcpy(copia, nome);
    // printf("%s\n", copia); // "{nome}"

    /*------ strlen --------*/

    char texto[] = "Olha como vc pode ver";

    size_t comprimento = strlen(texto); // strlen retorna o comprimento da string, que é do tipo size_t.

    printf("Comprimento: %zu\n", comprimento); // "comprimento: 21"

    return 0;
}