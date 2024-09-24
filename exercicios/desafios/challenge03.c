// String Palindrome

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *word = malloc(100);
    if(word == NULL){
        perror("Initial allocation failed");
        return 1;
    }

    printf("Write the word u want to know if is a Palindrome: ");
    scanf("%99s", &word); // read a word with at most 99 characters

    size_t newSize = strlen(word) + 1;
    char *newWord = realloc(word, newSize);

     if(newWord == NULL){
        perror("Initial allocation failed");
        return 1;
    }

    word = newWord;

    printf("%s", word);

    for(int i = 0; i < 5; i++){

    }
    
    free(word);

    return 0;
}