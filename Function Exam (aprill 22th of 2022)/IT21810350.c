//Student ID - IT21810350
//Name - Rathnayake W.K.G.P.M
//Group - Y1.S1.WD.02.01.S1
//Campus - Malabe

#include <stdio.h>
float getDiscountedUnitPrice(int itemType);	
float calcPrice(float unitPrice , int quantity);
int main(){
	
	int itemType = 0 , quantity;
	float total=0 , unitPrice=0;
		
	while ( itemType != -1){
		
		printf("Enter item type: ");
		scanf("%d", &itemType);

		if (itemType == -1){
			break;
		}
		
		printf("Enter quamtity: ");
		scanf("%d", &quantity);

		unitPrice = getDiscountedUnitPrice(itemType);

		total += calcPrice(unitPrice,quantity);		
	}
	
	printf("Total Amount: %.2f", total);
	
	return 0;
}

float getDiscountedUnitPrice(int itemType){
	
	float unitPrice;
	
	if (itemType == 1){
		unitPrice = 300 - (300 * (7.5/100));
	}
	else if (itemType == 2){
		unitPrice = 250;
	}
	else if (itemType == 3){
		unitPrice = 550;
	}
	else if (itemType == 4){
		unitPrice = 120 - (120 * (5.0/100));
	}
	else if (itemType == 5){
		unitPrice = 240 - (240 * (2.55/100));
	}
	
	return unitPrice;
}

float calcPrice(float unitPrice , int quantity){
	
	float price;
	
	price = unitPrice * quantity;
	
	return price;
}




