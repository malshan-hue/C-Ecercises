#include <stdio.h>
int main (){

    int sales[4][5];
    int totOfp[4];
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
        
        total += sales[i][0];
        
    }

    printf("Total sales of product %d = %d\n", 1, total);
    


    return 0;
}