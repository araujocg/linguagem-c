#include <stdio.h>
#include <stdbool.h>

FILE *fptr;

void rainIsComing(bool rain){
    fptr = fopen("rainFile.txt", "w");
    if(fptr == NULL){
        printf("Error opening file");
    }

    if(rain){
        fprintf(fptr, "It's Raining right now");
    } else {
        fprintf(fptr, "It's not Raining");
    }

    fclose(fptr);
}

void addContent(){
    fptr = fopen("addContent.txt", "a");

    fprintf(fptr, "Now u add more text to the file\n");

    fclose(fptr);
}

void readFile(char *string){
    fptr = fopen("readFile.txt", "r");

    fgets(string, 100, fptr);

    printf("%s", string);

    fclose(fptr);
}

int main(){
    bool isRain = true;
    char stringFile[100];

    rainIsComing(isRain);
    addContent();
    readFile(stringFile);

    return 0;
}