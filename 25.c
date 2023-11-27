#include<stdio.h>
int sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return(sum);
}
void main()
{
    int s,n,r;
    printf("Enter Range to find Sum\n");
    scanf("%d",&r);
    s=sum(r);
    printf("Sum = %d",s);

}