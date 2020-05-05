#include<stdio.h>
int main()
{ int a;
scanf("%d",&a);
while(a)
{
	if(a>=65||a<=91)
	printf("%c",a);
	a++;
}
return 0;
}
