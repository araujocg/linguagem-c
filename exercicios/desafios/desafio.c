#include <stdio.h>
#include <stdbool.h>

struct Complaints{
    int id;
    char name[30];
    char text[200];
    bool resolved;
    int level;
};


int main(){
    
    struct Complaints Complain[50]; 
    int moreComplaints;

    // while (/* condition */)
    // {
    //     /* code */
    // }
    

    for (int i = 0; i < 50; i++){
        printf("Existe mais alguma reclamação? (1 para Sim e 2 para Não):");
        scanf("%d", &moreComplaints);

        // moreComplaints? return : NULL;
    }
    

    return 0;
}