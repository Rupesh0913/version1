#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("Enter the string: ");
	gets(str);
	printf("entered string is: ");
	puts(str);
	printf("length of string: ");
	printf("%s",strlen(str));
}
