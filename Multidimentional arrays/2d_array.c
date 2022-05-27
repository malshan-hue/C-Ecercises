#include <stdio.h>
int main (){

    int array[2][3] = {0};  //declaring a array of 2 rows and 3 columns
    int i, j, number;   //declaring variables

    for (i=0; i<2; i++){    //outterloop for rows

        for (j=0; j<3; j++){    //inner loop for columns

            printf("Enter row %d , column %d eliment: ", i , j);    //prompt the user to input array eliments
            scanf("%d", &number);

            array[i][j] = number;   //assigning eliments to the array

        }
    }

    for (i=0; i<2; i++){    //printing the 2D array

        for (j=0; j<3; j++){

            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}