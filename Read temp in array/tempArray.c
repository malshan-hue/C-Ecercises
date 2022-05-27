#include <stdio.h>
int main (){
    
    float temp[2][3];
    float avgTemp[2][1];
    int i , j, k;
    float sum=0;
    
    for (i=0; i<2; i++){
        
        for (j=0; j<3; j++){
            printf("Enter the temparatures: ");
            scanf("%f", &temp[i][j]);
        }
        printf("\n");
    }
    
    for (i=0; i<2; i++){
        sum = 0;
        for (j=0; j<3; j++){
            
            sum += temp[i][j];
        }
      
        avgTemp[i][0] = sum/3.0;    
        
    }
    
    
    for (i=0; i<2; i++){
            
        printf("%.1f", avgTemp[i][0]);
        printf("\n");
        
    }
    return 0;
}