// String Palindrome

#include <stdio.h>

int main(){

    char *word = malloc(100);
    if(word == NULL){
        perror("Initial allocation failed");
        return 1;
    }

    printf("Write the word u want to know if is a Palindrome: ");
    scanf("%99s", &word); // read a word with at most 99 characters

    // continue

    for(int i = 0; i < 5; i++){

    }

    return 0;
}