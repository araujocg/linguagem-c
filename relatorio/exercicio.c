#include <stdio.h>
#include <stdlib.h>

int encontrarMaiorNumero(int numeros[], int tamanho){

    int maior = numeros[0];

    for(int i = 1; i< tamanho; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }

    return maior;

}


int encontrarMenorNumero(int numeros[], int tamanho){

    int menor = numeros[0];

    for(int i = 1; i< tamanho; i++){
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    return menor;
}

int main(){

    int numeros[20];

    for (int i = 0; i < 20; i++){
        printf("Digite o %d Numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    int numeroMaior = encontrarMaiorNumero(numeros, 20);
    int numeroMenor = encontrarMenorNumero(numeros, 20);


    printf("O maior numero foi: %d\n", numeroMaior);
    printf("O menor numero foi: %d", numeroMenor);

    return 0;
}