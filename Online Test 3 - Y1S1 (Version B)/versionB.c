#include <stdio.h>
#define SIZE 10
int main(){

    int intArr[SIZE] = {0};     //declaring Arrays
    int positiveNum[] = {0};
    int negativeNum[] = {0};
    
    int i, pCount=0, nCount=0;  //declaring variables

    for (i=0; i<SIZE; i++){

        printf("Enter an Integer: ");   //storing numbers to array called intArr 
        scanf("%d", &intArr[i]);
    }

    printf("Number series: ");  

    for (i=0; i<SIZE; i++){

        printf("%d ", intArr[i]);   //display the intArr array eliments
    }

    for (i=0; i<SIZE; i++){   

        if (intArr[i] >= 0){
            positiveNum[pCount] = intArr[i];    //storing positive numbers
            pCount++;
        }
        else{
            negativeNum[nCount] = intArr[i];    //storing negative numbers
            nCount++;
        }
    }

    printf("\nPositive Numbers: ");

    for (i=0; i<pCount; i++){

        printf("%d ", positiveNum[i]);  //printing positive numbers
    }

    printf("\nNegative Numbers: ");

    for (i=0; i<nCount; i++){

        printf("%d ", negativeNum[i]);  //orinting negative numbers
    }

    return 0;
}