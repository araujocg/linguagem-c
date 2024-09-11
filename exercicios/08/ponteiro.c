#include <stdio.h>
#include <string.h>

int main(){
    // int graus = 32;
    // int *ponteiro = &graus;

    // printf("graus: %d\n", graus);

    // printf("Temperatura atual: ");
    // scanf("%d", ponteiro);

    // printf("graus atualizado: %d", graus);

    /*--------------------------------------*/

    int numbers[] = {2,5,7,8,9};
    int *pointer = numbers;

    // printf("%p\n", numbers); // automatically acts like a pointer to the first element of that array.
    // printf("%p\n", &numbers[0]);


    // for(int i = 0; i<5; i++){
    //     printf("%p\n", &pointer[i]);
    //     printf("%d\n", pointer[i]);
    // }

    for(int i = 0; i<5; i++){
        printf("%p\n", (pointer + i));
        printf("%d\n", *(pointer + i));
    }

    return 0;
}