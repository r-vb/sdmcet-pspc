#include<stdio.h>
int main()
{
        int num,temp,digit,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
            temp=num;   sum=0;
        while(num != 0)
        {
            digit=num%10;
            sum=sum+digit;
            num=num/10;
        }
    printf("Summation of individual digits of %d is %d.",temp,sum);
return 0;
}
