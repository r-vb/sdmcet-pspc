#include<stdio.h>
int main()
{
        int n,i,j,small;
        int a[200];
    printf("Enter value of n: ");
    scanf("%d",&n);
            for ( i = 0; i < n; i++)
            {
                scanf("%d",&a[i]);
            }
        small = a[0];
            for ( i = 1; i < n; i++)
            {
                if (a[i] < small)
                    small = a[i];
            }
    printf("Smallest is %d",small);
return 0;
}