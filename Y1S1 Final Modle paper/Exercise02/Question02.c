#include <stdio.h>
int main (){

    int usage[4][7] = { {1.2,2.1,0.8,0.0,1.0,1.3,4.0},
                        {1.5,3.2,1.0,1.3,4.0,1.5,3.2,},
                        {2.3,0.4,1.2,2.1,0.8,0.0,2.6},
                        {2.1,1.7,7.0,1.2,2.1,0.8,0.0}};
    
    int i, j, row, col;
    float max=0, min=0, avg=0, tot=0;

    for (i=0; i<4; i++){

        for (j=0; j<7; j++){
            if (max < usage[i][j]){
                max = usage[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("Day of the Month with maximum usage: week %d day %d\n", row+1, col+1);
    printf("Maximum Usage in units: %.2f\n", max);

    min = usage[0][0];

    for (i=0; i<4; i++){

        for (j=0; j<7; j++){
            if (min > usage[i][j]){
                min = usage[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("Day of the Month with minimum usage: week %d day %d\n", row+1, col+1);
    printf("Minimum Usage in units: %.2f\n", min);

    for (i=0; i<4; i++){

        for (j=0; j<7; j++){
            
            tot += usage[i][j];
        }
    }

    avg = tot / 28;

    printf("Average usage for the Month: %.2f\n", avg);
    printf("Total usage for the Month: %.2f\n", tot);
    
    return 0;
}
