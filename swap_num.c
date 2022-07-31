#include<stdio.h>
int main()
{
        int a,b;
    printf("Enter any two numbers to swap: ");
    scanf("%d%d",&a,&b);
    printf("Before swaping\na = %d\nb = %d",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
    printf("\n\nAfter swaping\na = %d\nb = %d",a,b);
return 0;
}
