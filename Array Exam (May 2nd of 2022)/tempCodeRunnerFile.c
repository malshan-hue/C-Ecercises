//Student ID - IT21810350
//Name - Rathnayake W.K.G.P.M
//Group - Y1.S1.WD.02.01.S1
//Campus - Malabe

#include <stdio.h>
int main (){

    int payment[4][3] = {0};    //declaring the payment array
    int i, j, appointmentType, PatientCategory, totalIncome=0;    //declaring the variables

    for (i=0; i<4; i++){   //outter loop to get row data
        for (j=0; j<3; j++){    //inner loop to get column data

            printf("Enter the payment of appintment %d and category %d: ", i+1, j+1);   //reading the payment and storing them in the paymen array
            scanf("%d", &payment[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<4; i++){
        for (j=0; j<3; j++){

            printf("%d\t", payment[i][j]);  //displaying the payment array in tabular format
        }
        printf("\n");
    }

    printf("\n");

     for (i=0; i<100; i++){
        printf("Enter appointment type: "); //promt the user to input appointment type
        scanf("%d", &appointmentType);

        if (appointmentType == -1){ //checkong the appointment type not equal to -1
            break;  //program will terminate when user input -1 as for the appointment type
        }
        else{
            
            printf("Enter patient category: "); //prompt the user to inpur patient category
            scanf("%d", &PatientCategory);

            totalIncome += payment[appointmentType-1][PatientCategory-1];   //calculating the total income
        }
    }
    
    printf("Total income earned by the medical center for a day: %d", totalIncome); //displaying the total income
   
    return 0;
}