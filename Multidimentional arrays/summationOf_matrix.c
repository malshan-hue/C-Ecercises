#include <stdio.h>
int main (){

    int a[2][3] = {{2,3,4},{6,7,8}};    //declaring arrays
    int b[2][3] = {{2,1,-2},{3,-3,-2}};
    int answer[2][3] = {0};

    int i, j;   //declaring variables

    for (i=0; i<2; i++){

        for (j=0; j<3; j++){    

            answer[i][j] = a[i][j] + b[i][j];   //adding array A eliments with array B eliments
        }
    }

    for (i=0; i<2; i++){

        for (j=0; j<3; j++){

            printf("%d\t", answer[i][j]);   //displaying the summation of given two matrices
        }

        printf("\n");   //separate the row
    }

    return 0;
}
