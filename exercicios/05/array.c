#include <stdio.h>

int main(){
    int Numbers[] = {20, 50, 70, 80, 30, 130};
    int length = sizeof(Numbers) / sizeof(Numbers[0]); // to know the length of one array

    for (int i = 0; i < 6; i++){
        printf("%d\n", Numbers[i]);
    }

    for (int i = 0; i < length; i++){
        printf("%d\n", Numbers[i]);
    }

    return 0;
}