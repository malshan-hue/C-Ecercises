#include <stdio.h>
#include <stdlib.h>

int main (){

int courseNo , marks; // declaring variables
float discount , amount;

    printf("Enter course number: "); //prompt the user to input course number
    scanf("%d", &courseNo);
    
    if (courseNo == 1 ){
        printf("Enter marks: ");
        scanf("%d", &marks);
        
        if ((marks >= 80) && (marks <=100)){
            
            discount = 150000 * 7.5 / 100;
            amount = 150000 - discount;
        }
        else if ((marks < 80 ) && (marks >=0)){
            amount = 150000;
        }
        else{
            printf("Invalid marks");
            exit(0);
        }
    }
    else if (courseNo == 2){
        printf("Enter marks: ");
        scanf("%d", &marks);
        
        if ((marks >= 80) && (marks <=100)){
            
            discount = 175000 * 7.5 / 100;
            amount = 150000 - discount;
        }
        else if ((marks < 80 ) && (marks >=0)){
            amount = 150000;
        }
        else{
            printf("Invalid marks");
            exit(0);
        }
    }
    else{
        printf("invalid course");
        exit(0);
    }
    
    printf("The amount to be paid as course fee is %.2f", amount);

    return 0;

}