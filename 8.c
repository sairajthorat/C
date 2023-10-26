#include<stdio.h>
int main()
{
    int sum=0,temp,rem,n;
    n=12345;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum %d",sum);
}