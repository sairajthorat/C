#include<stdio.h>
int main()
{
    int yr;
    printf("enter year");
    scanf("%d",&yr);
    if(yr%4==0){
        printf("This is leap year");
    }
    else{
        printf("normal year");
    }
}