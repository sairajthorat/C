#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,t1,t2,d;
    printf("Enter coefficient of quadratic equation\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
    {
        x=-c/b;
        printf("This is not quadratic equation");
        printf("X=%0.2f\n",x);
    }
    else
    {
        d=(b*b)-(4*a*c);
        if (d==0)
        {
            t1=(-b+sqrt(d)/(2*a));
            t2=t1;
            printf("Roots are real and equal %0.2f %0.2f \n",t1,t2);
        }
        else
        {
            if(d>0)
            {
                t1=(-b+sqrt(d)/(2*a));
                t2=(-b+sqrt(d)/(2*a));
                printf("Roots are real and distinct %0.2f %0.2f \n",t1,t2);
            }
            else
            {
                printf("Roots are imaginary");
            }
        }
        
    }
    return(0);
}