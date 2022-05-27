#include <stdio.h>
#include <stdlib.h>
float calAdditionalCharges (int orderType, float subTotal);
float calTotalBill (float subTotal, float charges);
int main (){
    
    int orderType;
    float subTotal, totalBill=0, additionalcharge=0;
    
    printf("Enter sub total: ");
    scanf("%f", &subTotal);
    
    printf("Enter order type: ");
    scanf("%d", &orderType);
    
    additionalcharge = calAdditionalCharges(orderType, subTotal);
    
    totalBill = calTotalBill(subTotal,additionalcharge);
    
    printf("Total bill amount: %.2f", totalBill);
    
    
    return 0;
}

float calAdditionalCharges (int orderType, float subTotal){
    
    float charges=0;
    
    if (orderType == 1){
        charges = (subTotal * 12.0/100.0) + (subTotal * 12.0/100.0);
    }
    else if (orderType == 2){
        charges = subTotal * 12.0/100.0;
    }
    else if (orderType == 3){
        charges = (subTotal * 12.0/100.0) + (subTotal * 5.0/100.0);
    }
    else{
        printf("Order type is not valid\n");
        exit(0);
    }
    
    return charges;
}

float calTotalBill (float subTotal, float charges){
    
    float totalBill=0;
    
    totalBill = subTotal + charges;
    
    return totalBill;
}