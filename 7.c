#include<stdio.h>
int main()
{
    int sum=0,rev=0,temp,rem,n;
    n=12345;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("rev %d",rev);
}