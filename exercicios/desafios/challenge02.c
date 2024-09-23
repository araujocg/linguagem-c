// Prime number check

#include <stdio.h>
#include <stdbool.h>

int main(){

    int number;
    bool isPrime = true;

    printf("Digit your number: ");
    scanf("%d", &number);

    for(int i = 2; i < number; i++){
        if(number % i == 0){
            printf("The number is NOT a Prime, he is divisible for %d", i);
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        printf("The number is a Prime, he is divisible only for 1 and himself");
    }

    return 0;
}