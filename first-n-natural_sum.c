#include<stdio.h>
int main()
{
        int num,sum,i;
    printf("Enter the number n: ");
    scanf("%d",&num);
        sum=0;
    for (i = 1; i <= num; i++)
    {
        sum=sum+i;
    }
    printf("Summation of first %d natural numbers is %d.",num,sum);
        
return 0;
}
