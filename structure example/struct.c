#include <stdio.h>
int main (){

    struct student{
        
        char id[10];
        char name[10];
        char tpNum[10];
    };

    struct student student[2];

    int i;

    for (i=0; i<2; i++){
        printf("Enter student %d ID: ", i+1);
        scanf("%s", student[i].id);
    
        printf("Enter student %d name: ", i+1);
        scanf("%s", student[i].name);
    
        printf("Enter student %d TP number: ", i+1);
        scanf("%s", student[i].tpNum);

        printf("\n\n");
    }

    for (i=0; i<2; i++){
        printf("\n");
        printf("Student %d ID: %s\n", i+1, student[i].id);
        printf("Student %d name: %s\n", i+1, student[i].name);
        printf("Student %d Contact number: %s", i+1, student[i].tpNum);
        printf("\n\n");
    }
      
    
    return 0;
}