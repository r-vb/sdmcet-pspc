#include<stdio.h>
int main()
{
        float n,sum=0;
        int i, a[100];
        float avg;
    printf("Enter the value of n: ");
    scanf("%f",&n);
            for ( i = 0; i < n; i++)
            {
                scanf("%d",&a[i]);
            }
        for ( i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        avg = sum/n;
    printf("Average = %f",avg);
return 0;
}