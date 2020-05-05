
#include <stdio.h>
void calculate_the_maximum(int , int ); 
void calculate_the_maximum(int n, int k) 
{ int a,b,x,y;
for(a=1;a<n;a++)
{
    for(b=a+1;b<=n;b++)
    {
        if(x=(a & b)<k)
        printf("%d",x);
    }
}

}
int main()
{ 
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
