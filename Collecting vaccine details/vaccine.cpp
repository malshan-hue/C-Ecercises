#include <stdio.h>

int main ()
{
	struct vaccination{
		
		int dose;
		char vaccine;
	};
	
	int student,i,dose_1=0,dose_2=0,dose_3=0,s_vaccine=0,p_vaccine=0,m_vaccine=0,not_vac=0;
	char confirm;
	
	printf("enter number of students: ");
	scanf("%d",&student);
	printf("\n");
	
	struct vaccination vac[student];
	
	for (i=1;i<=student;i++){
		
		printf("are you vaccinated? ");
		scanf(" %c%*c",&confirm);
		
		if ((confirm == 'Y') || (confirm == 'y')){
			printf("enter vaccine type: ");
			scanf(" %c%*c",&vac[i].vaccine);
			
			if ((vac[i].vaccine == 'S') || (vac[i].vaccine == 's')){
				s_vaccine +=1;
			}
			else if ((vac[i].vaccine == 'P') || (vac[i].vaccine == 'p')){
				p_vaccine +=1;
			}
			else if ((vac[i].vaccine == 'M') || (vac[i].vaccine == 'm')){
				m_vaccine +=1;
			}
			else{
				printf("\nwrong vaccine type!!\n");
			}
			 
			printf("how many doses did you get? ");
			scanf("%d",&vac[i].dose);
			printf("\n");
			
			if (vac[i].dose == 1){
				dose_1 +=1;
			}
			else if (vac[i].dose == 2){
				dose_2 +=1;
			}
			else if (vac[i].dose == 3){
				dose_3 +=1;
			}
			else{
				printf("over dosed!!\n");
				
			}
			
		}
		else{
			not_vac +=1;
		}
		    	
	
	}
	printf("\ntotal number of students who has not takenany vaccine = %d\n", not_vac);
	printf("total number of students who has taken only one dose = %d\n", dose_1);
	printf("total number of students who has taken only two dose = %d\n", dose_2);
	printf("total number of students who has taken only three dose = %d\n\n", dose_3);
	printf("total number of students who has taken sinopharm = %d\n", s_vaccine);
	printf("total number of students who has taken pfizer = %d\n", p_vaccine);
	printf("total number of students who has taken moderna = %d\n", m_vaccine);
	
	return 0;
}
