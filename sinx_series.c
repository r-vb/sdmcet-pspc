/*
    sin x = x - (x^3)/3! + (x^5)/5! -...(x^n)/n! -- USING LOOPING.
*/

#include<stdio.h>
int main()
{
        int i, n;
        float x, sum, t;
    printf(" Enter the value for x : ");
    scanf("%f",&x);
    printf(" Enter the value for n : ");
    scanf("%d",&n);
            x=x*(3.14159/180);
            sum=x;  t=x;
        for(i=1;i<=n;i++)
        {
            t=(t*(-1)*x*x)/(2*i*(2*i+1));
            sum=sum+t;
        }
    printf(" The value of Sin(%f) = %.4f",x,sum);
return 0;
}
