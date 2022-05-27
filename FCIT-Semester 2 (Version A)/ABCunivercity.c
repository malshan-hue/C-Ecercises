#include <stdio.h>
#include <string.h>
int main(){

    int sessionCount, i;    //To store session count and values for for loop
    char subjestCode[6];    //Storing subject code
    char attendance[10];    //storing attendance present/absent
    char check[] = {"Y"};  

    while (strcmp(check, "Y") == 0){

        printf("Enter the subject code: "); //prompt the user to input subject code
        scanf("%s", subjestCode);

        printf("Enter the total number of sessions: "); //prompt the user to input seesion count
        scanf("%d", &sessionCount);

        int totalAttendance=0, totalAbsents=0; //declaring valriable to calculate total attendance and absent
        float attendancePercentage=0;

        for(i=1;i<=sessionCount;i++){   //checking how many session one student attended

            printf("Attendace for session No %d: ", i);
            scanf("%s", attendance);

            if (strcmp(attendance, "Present") == 0){    //if attendance is present total attendance will count
                totalAttendance++;
            }
            else if (strcmp(attendance, "Absent") == 0){    //if attendance is present total absent will count
                totalAbsents++;
            }
        }


        printf("\nTotal attendance for the session: %d\n", totalAttendance);    //print total attendance
        printf("Total absent for the session: %d\n", totalAbsents);    //print total absent
	
        attendancePercentage = (float)totalAttendance/sessionCount*100.0;   //calculating attendance precentage

        printf("\nAtendance percentage : %.2f\n", attendancePercentage);    //print attendance percentage

        if (attendancePercentage >= 80){
            printf("\nThe candidate is Eligible for sitting the exam.\n");  //print eligible if attendance percentage grater than 80
        }
        else{
            printf("\nThe candidate is Not Eligible for sitting the exam.\n");  //print not eligible if attendance percentage less than 80
        }
        
    printf("\nDo you want to check more (Y/N): ");  //prompt the user to input Y or N if they want to check more students attendance
    scanf("%s", check);

    printf("\n");

    }

    return 0;
}
