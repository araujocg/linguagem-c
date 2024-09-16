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
    int *pointer = numbers; // u dont need the "&" when is are an array

    // printf("%p\n", numbers); 
    printf("%p\n", &numbers); // automatically acts like a pointer to the first element of that array.


    // for(int i = 0; i<5; i++){
    //     printf("%d\n", &pointer[i]); // 6422276 / ...
    //     printf("%p\n", &pointer[i]); // 0061FF04 / ...
    //     printf("%d\n", pointer[i]); // 2 / 5 / ...
    //     printf("%p\n", pointer[i]); // 00000002 / 00000005 / ...
    // }

    // for(int i = 0; i<5; i++){
    //     printf("%d\n", (pointer + i)); // 6422276 / ...
    //     printf("%d\n", *(pointer + i)); // 2 / 5 / ...s
    // }

    return 0;
}