#include <stdio.h>
int main (){
    
    int number , i;
    
    printf("Enter Number: ");
    scanf("%d", &number);
    
    if (number > 0){
        
        for (i=0; i<12; i++){
            
            printf("%d x %d\t= %d\n", number, i+1, number*(i+1));
        }
    }
    else{
        printf("Invalid number");
    }
}