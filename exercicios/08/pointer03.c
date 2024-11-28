#include <stdio.h>
#include <string.h>

void display(int var, int *ptr);
void update(int *p);

int main(){

    int var = 15;
    int *ptr;

    ptr = &var;

    display(var, ptr);

    //  *ptr = 73 // atualizando o valor de var por meio do ponteiro
    update(&var); // atualizando o valor de var por meio de uma function usando um ponteiro
    
    printf("\n\n");

    display(var, ptr);
    return 0;
}

// ponteiros:
    // *ptr : o apontado por, conteúdo do endereço da variável que ptr aponta
    // ptr : o endereço da variável
    // &ptr : o endereço do ponteiro

void display(int var, int *ptr){
    printf("conteudo: %d\n", var);
    printf("endereco: %p\n", &var);
    printf("conteudo apontado pelo ponteiro: %d\n", *ptr);
    printf("endereco apontado pelo ponteiro: %p\n", ptr);
    printf("endereco do ponteiro: %p", &ptr);
}

void update(int *p){
    *p = *p + 1;
}