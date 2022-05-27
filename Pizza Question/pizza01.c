#include <stdio.h>
int main (){

    int pizzaType, pizzaQuantity;
    float pizzaCost, billAmount, totalAmount, netAmount, discount;
    char pizzaSize, creditCard, loyaltyCustomer, onlineOrder;

    do{
        printf("Input pizza type: ");
        scanf("%d", &pizzaType);

        if (pizzaType == -1)
        {
           break;
        }

        printf("Input the pizza size: ");
        scanf(" %c%*c", &pizzaSize);

        if (pizzaType == 1){ 
            
            if (pizzaSize == 'L'){
                pizzaCost = 1720.00;
            }
            else if (pizzaSize == 'M'){
                pizzaCost = 975.00;
            }
            else{
                printf("Invalid pizza size.");
                return -1;
            }
        }
        else if (pizzaType == 2){
            
            if (pizzaSize == 'L'){
                pizzaCost = 1820.00;
            }
            else if (pizzaSize == 'M'){
                pizzaCost = 1000.00;
            }
            else{
                printf("Invalid pizza size.");
                return -1;
            }
        }
        else{
           printf("Invalid pizza type.");
           return -1;
        }

        printf("Input the number of pizzas: ");
        scanf("%d", &pizzaQuantity);

        printf("\n");

        billAmount = pizzaCost * pizzaQuantity; 
        totalAmount += billAmount;

    }while (pizzaType != -1);

    printf("\n");

    printf("Are you paying by credit card (Y/N)? ");
    scanf(" %c%*c", &creditCard);

    printf("Are you a loyalty customer (Y/N)? ");
    scanf(" %c%*c", &loyaltyCustomer);

    printf("Is this an online order? ");
    scanf(" %c%*c", &onlineOrder);

    if (creditCard == 'Y'){
        
        discount = totalAmount * 0.2;
    }
    else if (creditCard == 'N'){
        
        if (loyaltyCustomer == 'Y'){
            
            discount = totalAmount * 0.15;
        }
        else if (loyaltyCustomer == 'N'){
            
            if (onlineOrder == 'Y'){
                
                discount = totalAmount * 0.05;
            }
            else if (onlineOrder == 'N'){
                
                discount = 0.0;
            }
        }
    }

    netAmount = totalAmount - discount;
  
    printf("\n");

    printf("Total bill amount: %.2f\n", totalAmount);
    printf("Discount: %.2f\n", discount);
    printf("Net amount: %.2f\n", netAmount);

    return 0;
}