#include<stdio.h>
int main()
{
        int num,i,rem,count;
    printf("Enter the number to check: ");
    scanf("%d",&num);
            count=0;
    for (i = 2; i <= num/2; i++)
    {
        rem=num%i;
        if (rem == 0)
        {
            count=1;
            break;
        }
    }
        if (count == 0)
            printf("%d is a Prime number.",num);
        else
            printf("%d is NOT a Prime number.",num);
return 0;
}
