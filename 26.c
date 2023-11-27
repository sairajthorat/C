#include<stdio.h>
long int factorial(int num)
{
    long int fact=1;
    for(int i =1;i<=num;i++)
    {
        fact=fact*i;
    }
    return(fact);
}
void main()
{
    int n,f;
    printf("Enter number to find factorial");
    scanf("%d",&n);
    f=factorial(n);
    printf("%d",f);
}