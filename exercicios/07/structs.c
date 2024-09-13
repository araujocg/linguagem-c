#include <stdio.h>
#include <string.h>

struct Aluno{
    char name[50];
    int age;
    float average;
};

struct People{
    char name[50];
    int age;
    float weight;
};

int main(){


    // First way ->
    // struct Aluno Aluno01;
    // Aluno01.name = "João"; // will create an error
    // strcpy(Aluno01.name, "João");
    // Aluno01.age = 23;
    // Aluno01.average = 6.7;


    // Second way ->
    struct Aluno Aluno01 = {"João", 23, 6.7};

    // Copy struct ->
    struct Aluno Aluno02;
    Aluno02 = Aluno01;

    // Changed values ->
    strcpy(Aluno02.name, "Almeida");
    Aluno02.average = 4.5;
    
    // printf("Nome: %s\n", Aluno01.name);
    // printf("Idade: %d\n", Aluno01.age);
    // printf("Media das notas: %.1f\n", Aluno01.average);

    // printf("Name: %s, age: %d, avarage notes: %.1f\n", Aluno02.name, Aluno02.age, Aluno02.average);

    ///////////////////////////////////////////////////////

    // Array of struct -> 
    struct People people[3] = {
        {"Maria Eduarda", 27, 67},
        {"Eduardo Silva", 33, 84},
        {"Ana Julia", 16, 64}
    };

    int length_people = sizeof(people) / sizeof(people[0]);


    for(int i = 0; i < length_people; i++){
        printf("Name: %s, age: %d, weight: %.1f kg\n", people[i].name, people[i].age, people[i].weight);
    }

    return 0;
}