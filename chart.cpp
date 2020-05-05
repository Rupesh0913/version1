#include<stdio.h>
struct student
{
	int roll;
	float marks;
	char name[10],grade;
}b[10];
int main()
{
		int i,j,size;//name[10];
	printf("Enter total size of details:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		//for(j=0;j<10;j++)
		//{	
		printf("\nEnter name:");
		scanf("%s",&b[i].name);
		//}
		printf("Enter roll:");
		scanf("%d",&b[i].roll);
		printf("Enter marks:");
		scanf("%f",&b[i].marks);
		printf("Enter grade:");
		scanf("%s",&b[i].grade);
		printf("\n");
	}
	printf(" ___________________________________________________\n");
	printf("|   GRADE    |   ROLL   |    MARKS    |   NAME      |\n");
	printf("|____________|__________|_____________|_____________|\n");
	for(i=0;i<size;i++)
	{
		printf("| %c          | %d       |  %0.2f      | %s          |\n\r",b[i].grade,b[i].roll,b[i].marks,b[i].name);
	}
	printf("|____________|__________|_____________|_____________|");
	return 0;
}


