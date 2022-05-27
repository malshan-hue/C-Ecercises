#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 25
int main (){

    struct order{   //creating structure to store receipt number an amount of burger

        char receiptNum[5];
        float amount;
    };

    char cancelReceipt[5];  //to check cancel option
    int i, j, option, burgerCount, receiptNumber, last;    //declaring variables
    float disscount;

    struct order receipt[25];   //declaring array to store receipt details

    for (i=0; i<SIZE; i++){

        printf("Welcome to Tasty Burgers\n");   //welcome message
        printf("Place your order here...\n");
        printf("1.Order Burger\n2.Cancel\n3.Exit\n");

        printf("\nSelect yor option: ");    //prompt the user to input option type
        scanf("%d", &option);

        if (option == 1){

            printf("How many Burgers you wish you order: ");    //prompt the user to input burger count
            scanf("%d", &burgerCount);

            if (burgerCount >= 5){  //checking burger count greater than 5
                
                disscount = 12.0 * burgerCount * 10.0/100.0;
                receipt[i].amount = 12.0 * burgerCount - disscount;     //adding discount if burger count grater than 5

                printf("\nYour total bill value is $%.2f\n", receipt[i].amount); //display the amount according to data stored in structure with  discount
                printf("Discount 10%c - %.2f\n", 37, disscount);

            }
            else{

                receipt[i].amount = 12.0 * burgerCount;
                printf("\nYour total bill value is $%.2f\n", receipt[i].amount);    //display the amount according to data stored in structure without  discount
            }

        strcpy(receipt[i].receiptNum, "B00");   //copy "B00" to the array in struct
        char last[2];   
        sprintf(last, "%d", receiptNumber+1);   //converting receipt ID  to string and store to the array called last
        strcat(receipt[i].receiptNum,last); //combine the receiptNum array and last array
       
        printf("your receipt number is %s\n", receipt[i].receiptNum);   //display the receipt number
    
        printf("\n<<Press Any Key to show the main menu>>\n");
        printf("\n");
        getch();

        }
        else if (option == 2){

            printf("Enter your receipt number: ");  //prompt the user to input receipt number
            scanf("%s", cancelReceipt);

            for (j=0; j<SIZE; j++){

                if (strcmp(receipt[j].receiptNum, cancelReceipt) == 0){     //checking the receipt number is stored in the array of structure

                    printf("\nYour order has been cancelled.\n");   //display message if receipt number stored in thr receiptNum array
                    receiptNumber -=1;
                }   
            }

            printf("\n<<Press Any Key to show the main menu>>\n");
            printf("\n");
            getch();    //get blank input
        }
        else if (option == 3){  //will exit the program if choose option 3
            exit(0);
        }
    receiptNumber += 1;
    
    }
    

    return 0;
}