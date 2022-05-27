#include <stdio.h>
int main (){

    char roomType, paymentMethod, more;
    int numOfRooms, numOfNights;
    float discount=0 ,totalAmount=0 , ratePerNight;

    do{

        printf("Enter Room Type: ");
        scanf(" %c%*c", &roomType);

        if (roomType == 'D'){
        ratePerNight = 31000.00;
        }
        else if (roomType == 'S'){
        ratePerNight = 35000.00;
        }
        else if (roomType == 'C'){
        ratePerNight == 50000.00;
        }
        else if (roomType == 'E'){
        ratePerNight = 75000.00;
        }
        else if (roomType == 'P'){
        ratePerNight = 100000.00;
        }
        else{
        printf("Invalid Room Type.");
        return 0;
        }

        printf("Enter Number of Rooms: ");
        scanf("%d", &numOfRooms);

        printf("Enter Number of Nights: ");
        scanf("%d", &numOfNights);

        printf("Enter Payment Method: ");
        scanf(" %c%*c", &paymentMethod);   

        if (paymentMethod == 'C'){
            discount = (float)ratePerNight * numOfRooms * numOfNights * 0.1;
            totalAmount = (float)(ratePerNight * numOfRooms * numOfNights) - discount;
        }
        else if (paymentMethod == 'M'){
            totalAmount = (float)ratePerNight * numOfRooms * numOfNights;
        }

        printf("\nTotal amount payble to the hotel = %.2f\n", totalAmount);

        printf("\nDo you want to countinue.? ");
        scanf(" %c%*c", &more);

        printf("\n");

        if ((more == 'N') || (more == 'n')){
            return 0;
        }

    }while((more == 'Y') || (more == 'y'));

    return 0;
}