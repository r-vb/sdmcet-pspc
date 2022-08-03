#include<stdio.h>
#include<math.h>
int main()
{
        float x,t,sinx;
    printf("Enter the value of x: ");
    scanf("%f",&x);
        t = x;
        x = x*(3.14/180);
        sinx = sin(x);
    printf("Sin(%f) = %f",t,sinx); 
return 0;
}