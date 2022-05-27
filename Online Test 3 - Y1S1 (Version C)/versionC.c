#include <stdio.h>
#define SIZE 10
int main(){

    int myArray[SIZE] = {0};    //declaring arrays
    int largeNum[SIZE] = {0};
    int i, total=0, count=0;    //declaring variables
    float  average=0;

    for (i=0; i<SIZE; i++){

        printf("Enter number %d: ", i);     //storing the input eliments to the array
        scanf("%d", &myArray[i]);
    }

    for (i=0; i<SIZE; i++){

        total += myArray[i];    //claculating total of array eliments
    }

    average = (float)total/SIZE;    //calculating averrage of calculated total of the array

    printf("Average : %.1f\n", average);    //displaying the average

    printf("my Array : ");
    for (i=0; i<SIZE; i++){

        printf("%d\t", myArray[i]); //displaying the myArray eliments
    }

    for (i=0; i<SIZE; i++){

        if(myArray[i]>average){
            largeNum[count] = myArray[i];   //finding and storing the eliments to array called largeNum where elements grater than to average of myArray 
            count++;    //count variable is used for identify the indexes of largeNum array
        }
    }

    printf("\nlargeNum : ");    //displaying the elements where grater than average of myArray
    for (i=0; i<count; i++){

        printf("%d\t",largeNum[i]); 
    }

    return 0;
}