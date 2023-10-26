#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter last digit ");
    scanf("%d",&n);
    printf("odd\teven\n");
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        else
        {
            printf("%d\t",i);
        }
        i++;
    }
}