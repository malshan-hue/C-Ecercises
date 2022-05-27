#include <stdio.h>
int main (){

    char id[10];
    char name[30];
    float avg;
    int i;

    FILE *ptr;  //creating file pointer

    ptr = fopen ("Student.dat", "w");   //creating file on pointers location

    if (ptr == NULL){

        printf("File cannot be created.");
        return -1;
    }

    //fprintf(ptr, "%-10s\t%-10s\t%-10s\n", "ID","name","average");
    //fprintf(ptr, "\n");

    for (i=0; i<3; i++){
        printf("enter your ID: ");
        scanf("%s", id);

        printf("enter your name: ");
        scanf("%s", name);

        printf("enter your average: ");
        scanf("%f", &avg);
        
        printf("\n");

        fprintf(ptr, "%-10s\t%-10s\t%-10.2f\n", id,name,avg);
        
    }

    fclose(ptr);

    return 0;
}