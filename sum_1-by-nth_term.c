/*
        TO FIND SUM OF 1+ 1/2 + 1/3 +...+ 1/n SERIES.
*/

#include<stdio.h>
int main()
{
        double n,i,term,sum;
    printf("Enter the value of n: ");
    scanf("%lf",&n);
            i=1;    sum=0.0;
        if (n > 1)
        {
            while (i<=n)
            {
                term = 1/i;
                sum = sum + term;
                i++;
            }
            printf("Summation of the series is %lf",sum);
        }
return 0;
}