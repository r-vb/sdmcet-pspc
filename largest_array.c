#include<stdio.h>
int main()
{
        int n,i,j,lar;
        int a[200];
    printf("Enter value of n: ");
    scanf("%d",&n);
            for ( i = 0; i < n; i++)
            {
                scanf("%d",&a[i]);
            }
        lar = a[0];
            for ( i = 1; i < n; i++)
            {
                if (a[i] > lar)
                    lar = a[i];
            }
    printf("Largest is %d",lar);
return 0;
}