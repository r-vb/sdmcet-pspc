#include<stdio.h>
int main()
{
        int terms,fib1=1,fib2=1,fib3,i;
    printf("Enter the value of n terms: ");
    scanf("%d",&terms);
    printf("%d %d ",fib1,fib2);
        for ( i = 3; i <= terms; i++)
        {
            fib3 = fib1 + fib2;
            printf("%d ",fib3);
            fib1 = fib2;
            fib2 = fib3;
        }
return 0;
}