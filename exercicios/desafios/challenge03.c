// String Palindrome

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char word[50];
    bool checker = true;

    printf("Write the word u want to know if is a Palindrome: ");
    scanf("%s", &word);

    size_t length = strlen(word + 1);

    for(int i = 0; i < length; i++){
        if(word[i] != word[length - i]){
            printf("End right here: %d\n", i);
            checker = false;
            break;
        }
    }

    if(checker == true){
        printf("Your word is a Palindrome!!");
    } else{
        printf("Your word are not a Palindrome! :(");
    }

    // printf("%d", length);
    // printf("first letter of word: %c", word[length]);









    // char *word = malloc(100);
    // if(word == NULL){
    //     perror("Initial allocation failed");
    //     return 1;
    // }

    // printf("Write the word u want to know if is a Palindrome: ");
    // scanf("%99s", &word); // read a word with at most 99 characters

    // size_t newSize = strlen(word) + 1;
    // char *newWord = realloc(word, newSize);

    // if(newWord == NULL){
    //     perror("Initial allocation failed");
    //     return 1;
    // }

    // word = newWord;

    // printf("%s", newWord);

    // for(int i = 0; i < 5; i++){

    // }
    
    // free(word);

    return 0;
}