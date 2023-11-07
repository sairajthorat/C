#include<stdio.h>
int main()
{
    int n=5;
    for(int i =1;i<=n;i++)
    {
        for(int s=i;s<n;s++)
        {
            printf(" ");
        }
        for(int p=1;p<=i;p++)
        {
            printf(" *");
        }
        for(int s=i;s<n;s++)
        {
            printf(" ");
        }
        for(int s=i;s<n;s++)
        {
            printf(" ");
        }
         for(int p=1;p<=i;p++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(int i =n;i>=1;i--)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" *");
        }
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}