#include<stdio.h>
int main()
{
        int num,i,sum;
        printf("Enter the value of n: ");
        scanf("%d",&num);
            sum=0;  i=1;
        while(i<=num)
        {
            sum=sum+(i*i);
            i++;
        }
        printf("Summation of squares of natural numbers upto %d is %d.",num,sum);
return 0;
}
