#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int num;
	FILE *fp;
	fp=fopen("D:\rupesh\About myself.docx","r");
//	if(fp==NULL)
//	{
//		printf("Error !!");
//		exit(1);
//	}
	fclose(fp);
	return 0;
}
