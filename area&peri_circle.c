#include <stdio.h>
int main()
{
    int r;
    float pi,peri,area;
    printf("Enter the radius: ");
    scanf("%d",&r);
        pi=3.14;
    peri=2*pi*r;
    area=pi*r*r;
    printf("Circumference and Area of the circle are %.3f and %.3f respectively.",peri,area);
return 0;
}
