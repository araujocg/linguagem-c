// Array manipulation

#include <stdio.h>

int main(){

    int numbers[5];

    for(int i = 0; i < 5; i++){
        printf("Write the %d postion number: ", i);
        scanf("%d", &numbers[i]);
    };

    for(int i = 4; i >= 0; i--){
        printf("[%d] ", numbers[i]);
    }

    return 0;
}