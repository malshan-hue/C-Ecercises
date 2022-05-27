#include <stdio.h>
#define SIZE 6
int main (){

    int arrNum[SIZE] = {0}; //declaring array
    int i;  //delcaring variable

    printf("Enter values top the array : \n");  //storing values to the array
    for (i=0; i<SIZE; i++){

        scanf("%d", &arrNum[i]);
    }

    printf("\n");
    for (i=0; i<SIZE-1; i++){

        if (arrNum[i]<arrNum[i+1]){ //checking elements are less than to the next element

            printf("Numbers are not stored in ascending order.");   //if less than to the next element will display its not asceending
            return;
        }
    }

    printf("Numbers are stored in ascending order.");   //diplay if the array elements are in ascending order


    return 0;
}