//      USING EULER'S METHOD.

#include<stdio.h>
int main()
{
        int a,b,t1,t2,rem,gcd,lcm;
    printf("Enter any two values: ");
    scanf("%d%d",&a,&b);
        t1=a;   t2=b;
            rem=a%b;
        while (b != 0)
        {
            rem=a%b;
            a=b;
            b=rem;
        }
            gcd=a;
            lcm=(t1*t2)/gcd;
        printf("GCD of %d and %d is %d.",t1,t2,gcd);
        printf("\nLCM of %d and %d is %d.",t1,t2,lcm);
return 0;
}
