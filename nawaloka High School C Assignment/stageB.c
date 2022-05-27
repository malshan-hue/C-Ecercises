#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 25
int main (){

    struct order{   //creating structure to store receipt number an amount of burger

        char receiptNum[5];
        float amount;
    };

    struct burger{  //storing users ordered burger names. incase of handling them
        char burgerName[10];

    };

    char cancelReceipt[5];  //to check cancel option
    int i, j, option, burgerCount, receiptNumber=0, last;    //declaring variables
    float disscount, burgerCost;
    char burgerType;

    struct burger burger[25];
    struct order receipt[25];   //declaring array to store receipt details

    for (i=0; i<SIZE; i++){

        printf("Welcome to Tasty Burgers\n");   //welcome message
        printf("Place your order here...\n");
        printf("1.Order Burger\n2.Cancel\n3.Exit\n");

        printf("\nSelect yor option: ");    //prompt the user to input option type
        scanf("%d", &option);

        if (option == 1){

            printf("\n");
            printf("Select the Burger Type\n");     //displaying burger types
            printf("A - Chicken Burger - 15$\n");
            printf("B - Ham Burger - 17$\n");
            printf("C - Vegie Burger - 13$\n");
            printf("X - To return to Main Menu\n");
            printf("\n");

            printf("Select your Burger Type: ");    //prompt the user to input any type of burger
            scanf(" %c%*c", &burgerType);

            if ( burgerType == 'A'){    //store the burger name as chicken to array in struct and burger cost equals 15
                burgerCost = 15.0;
                strcpy(burger[i].burgerName,"Chicken");
            }
            else if (burgerType == 'B'){    //store the burger name as Ham to array in struct and burger cost equals 117
                burgerCost = 17.0;
                strcpy(burger[i].burgerName,"Ham");
            }
            else if (burgerType == 'C'){    //store the burger Vegie as chicken to array in struct and burger cost equals 13
                burgerCost = 13.0;
                strcpy(burger[i].burgerName,"Vegie");
            }
            else if (burgerType == 'X'){    //user will display the main menu when input X 
                continue;
            }
            else{
                printf("\ninvalid input!!\n\n");
                printf("\n<<Press Any Key to show the main menu>>\n");
                printf("\n");
                getch();
                continue;
            }

            printf("You have selected %s Burger. How many burgers you wish you order? ", burger[i].burgerName);    //prompt the user to input burger count
            scanf("%d", &burgerCount);

            if (burgerCount >= 5){  //checking burger count greater than 5
                
                disscount = burgerCost * burgerCount * 10.0/100.0;
                receipt[i].amount = burgerCost * burgerCount - disscount;     //adding discount if burger count grater than 5

                printf("\nYour total bill value is $%.2f\n", burgerCost*burgerCount); 
                printf("Discount 10%% - $%.2f\n",disscount);
                printf("Final bill value is $%.2f\n", receipt[i].amount);    //display the amount according to data stored in structure with  discount

            }
            else{

                receipt[i].amount = burgerCost * burgerCount;
                printf("\nYour total bill value is $%.2f\n", receipt[i].amount);    //display the amount according to data stored in structure without  discount
            }
        

        strcpy(receipt[i].receiptNum, "B00");   //copy "B00" to the array in struct
        char last[2];   
        sprintf(last, "%d", receiptNumber+1);   //converting receipt ID  to string and store to the array called last
        strcat(receipt[i].receiptNum,last); //combine the receiptNum array and last array
       
        printf("\n");
        printf("your receipt number is %s\n", receipt[i].receiptNum);   //display the receipt number
        receiptNumber += 1;
    
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
                    receiptNumber -= 1;
                }   
            }

            printf("\n<<Press Any Key to show the main menu>>\n");
            printf("\n");
            getch();    //get blank input
        }
        else if (option == 3){  //will exit the program if choose option 3
            exit(0);
        }

    }

    return 0;
}