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

    struct meals{
        char mealName[10];
    };

    char cancelReceipt[5];  //to check cancel option
    char password[15];
    int i, j, option, burgerCount, itemCount, receiptNumber = 0, last;    //declaring variables
    float disscount=0, burgerCost, mealCost, chipsCost, drinkCost, currentBill=0, totalBill=0, revenue;
    char burgerType, mealType, addMore;

    struct meals meal[SIZE];
    struct burger burger[SIZE];
    struct order receipt[SIZE];   //declaring array to store receipt details

    for (i=0; i<SIZE; i++){

        printf("\nWelcome to Tasty Burgers\n");   //welcome message
        printf("Place your order here...\n");
        printf("1.Order Meals\n2.Order Burgers\n3.Order Chips\n4.Order Cold Drinks\n5.Process order\n6.Cancel\n7.Exit\n");

        printf("\nSelect yor option: ");    //prompt the user to input option type
        scanf("%d", &option);

        if (option == 1) {  //odering meals

             do{

                printf("\n");
                printf("Select the meal Type\n");     //displaying meals types
                printf("A - Big Chicken Meal - 20$\n");
                printf("B - Big Ham Meal - 22$\n");
                printf("C - Big Vegie Meal - 18$\n");
                printf("X - To return to Main Menu\n");
                printf("\n");

                printf("Select your Meal Type: ");    
                scanf(" %c%*c", &mealType);

                if ( mealType == 'A'){   
                    mealCost = 20.0;
                    strcpy(meal[i].mealName,"Chicken");
                }
                else if (mealType == 'B'){    
                    mealCost = 22.0;
                    strcpy(meal[i].mealName,"Ham");
                }
                else if (mealType == 'C'){    
                    mealCost = 18.0;
                    strcpy(meal[i].mealName,"Vegie");
                }
                else if (mealType == 'X'){    
                    continue;
                }
                else{
                    printf("\ninvalid input!!\n\n");
                    printf("\n<<Press Any Key to show the main menu>>\n");
                    printf("\n");
                    getch();
                    continue;
                }

                printf("You have selected %s meal. How many meals you wish you order? ", meal[i].mealName);    //prompt the user to input burger count
                scanf("%d", &itemCount);

                currentBill = mealCost * itemCount;  //calculate current bill
                totalBill += currentBill;
                printf("Your current bill value is $%.2f\n", totalBill);
                
                printf("\nPress 'Y' to add more meals into your order or press 'X' to go back to the previous menu: ");
                scanf(" %c%*c", &addMore);
                printf("\n");

            }while (addMore == 'Y');

        if (currentBill >= 100){  //checking burger count greater than 5
                    
            disscount = currentBill * 0.15;
            currentBill = currentBill - disscount;     //adding discount if burger count grater than 5
            totalBill += currentBill;

        }

        itemCount = 0;

        }  

        else if (option == 2){

            do{

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
                scanf("%d", &itemCount);

                burgerCount += itemCount; //calculate current burger count and store in burgerCount variable
                currentBill = burgerCost * itemCount;  //calculate current bill
                totalBill += currentBill;
                printf("Your current bill value is $%.2f\n", totalBill);

                printf("\nPress 'Y' to add more burgers into your order or press 'X' to go back to the previous menu: ");
                scanf(" %c%*c", &addMore);
                printf("\n");


            }while (addMore == 'Y');

        if (burgerCount >= 5){  //checking burger count greater than 5
                    
            disscount = currentBill * 0.1;
            currentBill = currentBill - disscount;     //adding discount if burger count grater than 5
            totalBill += currentBill;

        }
        
        burgerCount = 0;    //values of buger count will be reset
        itemCount = 0;

        }
        else if (option == 3){  //ordering chips

            do {
                printf("You have selected chips. How many Chips you wish you order: ");
                scanf("%d", &itemCount);
                chipsCost = 5;

                currentBill = chipsCost * itemCount;
                totalBill += currentBill;
                printf("Your current bill value is $%.2f\n", totalBill);

                printf("\nPress 'Y' to add more burgers into your order or press 'X' to go back to the previous menu: ");
                scanf(" %c%*c", &addMore);
                printf("\n");

            }while(addMore == 'Y');

            itemCount = 0;

        }

        else if (option == 4){  //ordering cold drinks

            do {
                printf("You have selected Cold drinks. How many drinks you wish you order: ");
                scanf("%d", &itemCount);
                drinkCost = 3.50;

                currentBill = drinkCost * itemCount;
                totalBill += currentBill;
                printf("Your current bill value is $%.2f\n", totalBill);

                printf("\nPress 'Y' to add more burgers into your order or press 'X' to go back to the previous menu: ");
                scanf(" %c%*c", &addMore);
                printf("\n");

            }while(addMore == 'Y');

            itemCount = 0;
        }

        else if (option == 5){
            
            receipt[i].amount = totalBill;
            printf("\nYour total bill value is $%.2f\n", receipt[i].amount);

            strcpy(receipt[i].receiptNum, "B00");   //copy "B00" to the array in struct
            char last[2];   
            sprintf(last, "%d", receiptNumber+1);   //converting receipt ID  to string and store to the array called last
            strcat(receipt[i].receiptNum,last);

            printf("\n");
            printf("your receipt number is %s\n", receipt[i].receiptNum);
            printf("Please go to a register and make the payment by quoting the Receipt Number - %s.\n", receipt[i].receiptNum);
            totalBill = 0;    //values of current bill will be reset
            receiptNumber += 1;
            revenue += receipt[i].amount;

            printf("\n");
            
        }
        
        else if (option == 6){

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
        else if (option == 7){  //will exit the program if choose option 3
            exit(0);
        }
        else if (option == 9){
            printf("Enter the password: ");
            scanf("%s", password);

            if (strcmp(password, "TastyBurger") == 0){
                printf("\nPassword Acepted\n");
                printf("Total revenue for today: $%.2f\n", revenue);

            }
            else{
                printf("\nInavlid password\n");
            }
            
            printf("\n<<Press Any Key to show the main menu>>\n");
            printf("\n");
            getch();    //get blank input            

        }

    }

    return 0;
}