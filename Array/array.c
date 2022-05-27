#include <stdio.h>
int main (){

    int sales[4][5];
    int totOfsp[4][1];
    int i, j, total;

    for (i=0; i<4; i++){

        for (j=0; j<5; j++){

            printf("Enter salesperson %d's product %d's amount: ", i+1, j+1);
            scanf("%d", &sales[i][j]);

        }
        printf("\n");
    }

    for (i=0; i<4; i++){

        for (j=0; j<5; j++){

            printf("%d\t", sales[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<4; i++){
        total =0;
        for (j=0; j<5; j++){

            total += sales[i][j];
        }
        totOfsp[i][0] = total;
    }

    for (i=0; i<4; i++){
        printf("Total sales of salesperson %d = %d\n", i+1, totOfsp[i][0]);
    }


    return 0;
}