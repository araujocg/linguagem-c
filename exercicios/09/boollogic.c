#include <stdio.h>
#include <string.h>

int main(){
    int estaChovendo = 1;
    int temGuardaChuva = 1;

    if(estaChovendo && !temGuardaChuva){
        printf("É melhor não sair\n");
    }

    if(!estaChovendo || temGuardaChuva){
        printf("Pode sair");
    }

    return 0;
}