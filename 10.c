#include<stdio.h>
int main()
{
     int a=0,b=1,i,fibb;
    printf("%d\t",a);
    printf("%d\t",b);
    i=3;
    while(i<=10)
    {
        fibb=a+b;
        printf("%d\t",fibb);
        a=b;
        b=fibb;
        i++;
    }

}