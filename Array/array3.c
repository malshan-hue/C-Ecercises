#include <stdio.h>
int main (){

    int sales[4][5];
    int totOfp[5];
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

    for (i=0; i<5; i++){
        total = 0;
        for (j=0; j<4; j++){
            total += sales[j][i];
        }
        totOfp[i]= total;
    }

    for (i=0; i<5; i++){

        printf("Total sales of product %d = %d\n", i+1, totOfp[i]);
    }
    


    return 0;
}