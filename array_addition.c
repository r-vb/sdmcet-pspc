#include<stdio.h>
int main()
{
        int i,n,sum=0;
        int a[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
            for ( i = 0; i < n; i++)
            {
                scanf("%d",&a[i]);
            }
        for ( i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
    printf("Sum = %d",sum);
return 0;
}