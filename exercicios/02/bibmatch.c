#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    float nota01, nota02, media;

    // printf("Digite a Primeira nota do aluno: ");
    // scanf("%f", &nota01);
    // printf("Digite a Segunda nota do aluno: ");
    // scanf("%f", &nota02);

    printf("Digite 2 numeros: ");
    scanf("%f %f", &nota01, &nota02);


    media = (nota01 + nota02) / 2;

    printf("No Final a media do aluno foi de: %.2f\n", media);
    printf(media >= 6? "APROVADO" : "REPROVADO");
    
    return 0;
}