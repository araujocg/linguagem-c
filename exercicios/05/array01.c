#include <stdio.h>

int main(){
    int Numbers[] = {5,7,6,4,8,7};
    int numbersLength = sizeof(Numbers) / sizeof(Numbers[0]);

    int sum = 0;
    float average;

    for( int i = 0; i < numbersLength; i++ ){
        sum += Numbers[i];
        printf("%d\n", sum);
    }

    average = (float) sum / numbersLength;

    printf("%.2f", average);

    return 0;
}