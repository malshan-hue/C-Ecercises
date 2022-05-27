#include <stdio.h>
int main (){

    int number, i;

    FILE *ptr;

    ptr = fopen("number.txt", "r");

    if (ptr == NULL){

        printf("file could not be opened.");
        return -1;
    }

    for (i=0; i<10; i++){

        fscanf(ptr, "%d", &number);
        printf("Number %d is = %d\n", i+1, number);
    }

    fclose(ptr);

    return 0;
}