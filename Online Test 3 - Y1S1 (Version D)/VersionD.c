#include <stdio.h>
#define SIZE 8
int main (){

    int num[SIZE]= {0}; //declaring array
    int i, j, number, pattern=0;    //declaring variables

    for (i=0; i<SIZE; i++){

        printf("Enter your integer %d: ", i);       //prompt the user to onpur an integers set
        scanf("%d", &number);
        
        if ((number>=1) && (number<=4)){    //check the inserted number in between 1 and 4

            num[i] = number;    //if so number will added to the array
        }
        else{

            printf("You have entered invalid integer.\n");  //if not prompt the user to re enter the number again
            printf("please re enter the integer again.\n");
            i--;    //to balance the index of the array
        }
    }

    printf("\nnum array : ");   //display the array
    for(i=0; i<SIZE; i++){

        printf("%d ", num[i]);
    }

    for (i=0; i<SIZE; i++){

            if((num[i] == 1) && (num[i+1] == 3)){   //checking the patters
                pattern++;  //if so count how many were appeared in the array
            }
        
    }

    printf("\nNumbers of times the pattern 1 3 apear : %d", pattern);   //display the appeared pattern count

    return 0;
}