#include<stdio.h>
int main()
{
    int fact =1 ,i=1,n;
    printf("enter number to find factorial");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial %d",fact);
}