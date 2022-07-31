#include<stdio.h>
int main()
{
        int num,temp,digit,reverse;
    printf("Enter the number to check: ");
    scanf("%d",&num);
            temp=num;   reverse=0;
        while (num != 0)
        {
            digit=num%10;
            reverse=(reverse*10)+digit;
            num=num/10;
        }
        if (temp == reverse)
            printf("%d is a Palindrome number.",temp);
        else
            printf("%d is NOT a Palindrome number.",temp);
return 0;
}
