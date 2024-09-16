#include <stdio.h>
#include <stdlib.h>

struct Person{
	char name[56];
    int age;
};

void createPerson(struct Person *p, int age){
	// (*p).age = age; // Basicly the same thing
    p -> age = age; 
};

int main() {

  int numberRandom = 27;

  struct Person lowLevelLearning;
  createPerson(&lowLevelLearning, 38);
  
  printf("%d", lowLevelLearning.age);
  
  return 0;
}