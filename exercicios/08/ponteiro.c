#include <stdio.h>
#include <string.h>

int main(){
    int graus = 32;
    int *ponteiro = &graus;

    printf("graus: %d\n", graus);

    printf("Temperatura atual: ");
    scanf("%d", ponteiro);

    printf("graus atualizado: %d", graus);

    return 0;
}