#include <stdio.h>
int main (){

    char id[10];
    char name[30];
    float avg;
    int i;

    FILE *ptr;

    ptr = fopen("student.dat", "r");

    if (ptr == NULL){

        printf("File cannot be opened.");
        return -1;
    }

    fscanf(ptr, "%s%s%f", id,name,&avg);

    while (!feof(ptr)){

        printf("%-10s\t%-10s\t%-10.2f\n", id,name,avg);
        fscanf(ptr, "%s%s%f", id,name,&avg);

    }

    fclose(ptr);

    return 0;
}