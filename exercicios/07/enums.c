#include <stdio.h>

enum Level{ // group of constants (unchangeable values)
    LOW, // 0
    MEDIUM, // 1  // good practice use the uppercase to enums
    HIGH // 2
};

int main(){

    enum Level myvar = MEDIUM;

    printf("%d", myvar);

    return 0;
}