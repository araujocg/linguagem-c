#include <stdio.h>
#include <stdlib.h> //

int main() {
    int *ponteiro;
    ponteiro = (int *)malloc(sizeof(int) * 10);

    if (ponteiro == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Retorna erro se a alocação falhar
    }

    // Armazena valores no array alocado dinamicamente
    for (int i = 0; i < 10; i++) {
        ponteiro[i] = i * 2; // Armazena o dobro do índice em cada posição
    }

    // Acessa e imprime os valores armazenados
    for (int i = 0; i < 10; i++) {
        printf("ponteiro[%d] = %d\n", i, ponteiro[i]);
    }

    // Libera a memória alocada
    free(ponteiro);
    ponteiro = NULL; // boa pratica

    return 0;
}
