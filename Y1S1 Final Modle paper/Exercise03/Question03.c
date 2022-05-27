#include <stdio.h>
int main (){

    int i;
    char phoneNumber[10];
    float lcc, icc, rc, totalCharge = 0;

    FILE *ptr;

    ptr = fopen("charges.dat", "w");

    if (ptr == NULL){

        printf("File cannot be created.");
        return -1;
    }

    for (i=0; i<5; i++){
        printf("Enter Phone number: ");
        scanf("%s", phoneNumber);

        printf("Enter Local call Charges: ");
        scanf("%f", &lcc);

        printf("Enter International call Charges: ");
        scanf("%f", &icc);

        printf("Enter Rooaming Charges: ");
        scanf("%f", &rc);

        printf("\n");

        fprintf(ptr, "%s\t%.2f\t%.2f\t%.2f\n", phoneNumber,lcc,icc,rc);
        
    }

    fclose(ptr);

    ptr = fopen("charges.dat", "r");

    if (ptr == NULL){

        printf("File cannot be opened.");
        return -1;
    }

    for (i=0; i<5; i++){

        fscanf(ptr, "%s %f %f %f", phoneNumber, &lcc, &icc, &rc);

        totalCharge = lcc + icc + rc;

        printf("Phone number = %s total due amount = %.2f\n", phoneNumber,totalCharge);

        totalCharge = 0;
    }
    fclose(ptr);
    
    return 0;

}