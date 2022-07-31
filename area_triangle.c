#include<stdio.h>
#include<math.h>
int main()
{
        int a,b,c,s;
        float area;
    printf("Enter the value of three sides: ");
    scanf("%d%d%d",&a,&b,&c);
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is %.3f",area);
    return 0;
}
