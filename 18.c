/*1 
0 1
0 1 0
1 0 1 0
1 0 1 0 1*/
#include<stdio.h>
int main()
{
    int temp=1;
    for(int i=1;i<=5;i++)
    {
        for (int j =1;j<=i;j++)
        {
            if(temp%2==0){
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            
            temp++;
        }
        printf("\n");
    }
}