#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks;
}s[10];
int main()
{   int i,size;
	printf("Enter informations of student \n");
	printf("Enter the size of structure: ");
	scanf("%d",&size);
	for(i=0;i<size;++i)
	{
		s[i].roll=i+1;
		printf("For roll no. %d\n",s[i].roll);
		printf("ENTER NAME: ");
		scanf("%s",&s[i].name);
		printf("Enter marks: ");
		scanf("%f",&s[i].marks);
		printf("\n\n");
	}
	printf("Display info\n");
	for(i=0;i<size;++i)
	{
		printf("\n Roll nomber: %d\n",i+1);
		printf("Name: ");
		puts(s[i].name);
		printf("Marks: %.2f",s[i].marks);
		printf("\n");
	}
	return 0;
}

