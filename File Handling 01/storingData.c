#include <stdio.h>
#include <string.h>
int main (){

    int number[10];
    int i;
    
    FILE *ptr;  //creating file pointer

    ptr = fopen ("number.txt","w"); //creating file on pointers location

    if (ptr == NULL){

        printf("File cannot be created.\n");    //checking the file can be create
        return -1;
    }

    for (i=0; i<10; i++){       //storing data to the array
        printf("enter a number: ");
        scanf("%d", &number[i]);
    }

    for (i=0; i<10; i++){
        fprintf (ptr, "%d\n", number[i]); //storing the data in array to the created file
    }
    
    fclose(ptr);    //closing file

    return 0;
}