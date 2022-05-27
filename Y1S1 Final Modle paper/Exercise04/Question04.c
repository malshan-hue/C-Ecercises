#include <stdio.h>
float claculateIncrement(int grade, float basicSalary);
float calcTotSalary(float basicSalary, float increment);
int main (){

    int grade;
    float basicSalary, increment, totalSalary;

    printf("Enter salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Grade: ");
    scanf("%d", &grade);

    increment = claculateIncrement(grade,basicSalary);
    totalSalary = calcTotSalary(basicSalary,increment);

    printf("Increment: %.2f\n", increment);
    printf("Total Salary: %.2f\n", totalSalary);
    
    return 0;
}

float claculateIncrement(int grade, float basicSalary){

    float increment;

    if (grade == 1){
        increment = basicSalary * 0.1;
    }
    else if (grade == 2){
        increment = basicSalary * 0.15;
    }
    else if (grade == 3){
        increment = basicSalary * 0.2;
    }

    return increment;
}

float calcTotSalary(float basicSalary, float increment){

    float totalSalary;

    totalSalary = basicSalary + increment;

    return totalSalary;
}