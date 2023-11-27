#include<stdio.h>
int main()
{
    for(int i =1;i<=5;i++)
    {
        for(int s=5;s>i;s--)
        {
            printf(" ");
        }
        for(int j =1;j>=1;j++)
        {
            int temp=1;
            if(j<=i)
            {
                printf("%d",j);
            }
            if(j>i)
            {
                j=j-temp;
                temp++;
                printf("%d",j);
            }
        }
        printf("\n");
    }
}