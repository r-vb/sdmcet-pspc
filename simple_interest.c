#include<stdio.h>
int main()
{
        float p,t,r,si;
    printf("Enter values of P,T and R respectively: ");
    scanf("%f%f%f",&p,&t,&r);
        si=p*t*r/100;
    printf("Simple interest = %.2f",si);
return 0;
}
