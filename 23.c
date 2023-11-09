#include<stdio.h>
int main()
{
    for(int i =1;i<=10;i++)
    {
        int a=0;
        int b=1;
        int fibb=0;
        for(int j=1;j<=i;j++)
        {
            fibb=a+b;
            a=b;
            b=fibb;
            printf("%d \t",fibb);
        }
        printf("\n");
    }
}