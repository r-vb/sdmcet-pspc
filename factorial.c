#include<stdio.h>
int main()
{
        int num,fact,temp;
    printf("Enter the factorial number: ");
    scanf("%d",&num);
            temp=num;   fact=1;
        if(num!=0)
        {
            while(num>0)
            {
                fact=fact*num;
                num=num-1;
            }
            printf("Factorial of %d is %d.",temp,fact);
        }
        else
            printf("Factorial of zero is 1",temp);
        
return 0;
}
