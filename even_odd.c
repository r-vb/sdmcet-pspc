#include<stdio.h>
int main()
{
        int num,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
        rem=num%2;
    if (rem == 0)
        printf("%d is an even number.",num);
    else
        printf("&d is an odd number.",num);
return 0;
}
