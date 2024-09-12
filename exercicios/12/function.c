#include <stdio.h>

void returnPrint(char name[], int age){
    printf("Hello %s, u have %d years old right? \n", name, age);
}

void calculeArray(int array[], int length){

    for(int i = 0; i < length; i++){
        printf("%d\n", array[i]);
    }
} 

int returnSum(int array[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }

    return sum;
}

char* returnString(){ // have to be an pointer
    return "What's is your favorite Color?????";
}

int functionPassAfter(int x, int y);

int functionRecursion(int k);


int main(){
    int numbersArray[] = {2,3,4,5,6,7};
    int numbersArrayLength = sizeof(numbersArray) / sizeof(numbersArray[0]);

    returnPrint("Guilherme", 28);

    calculeArray(numbersArray, numbersArrayLength);

    printf("%d\n", returnSum(numbersArray, numbersArrayLength));

    printf("%s\n", returnString());

    printf("%d\n", functionPassAfter(2,5));

    printf("%d", functionRecursion(10));
    
    return 0;
}

int functionPassAfter(int x, int y){
    return x + y;
}

int functionRecursion(int k){
    if( k > 0){
        return k + functionRecursion( k - 1);
    } else{
        return 0;
    }
}