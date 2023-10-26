#include<stdio.h>
int main(){
    int sp,cp,profit,loss;
    printf("Enter cost price of product");
    scanf("%d",&cp);
    printf("Enter selling price of product");
    scanf("%d",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("Seller made profit of %d",profit);
    }
    else{
        if(cp>sp){
            loss=cp-sp;
            printf("Seller get loss of %d",loss);
        }
        else{
            printf("seller has no profit no loss");
        }
    }
}