#include<stdio.h>
int main()
{
        int n,a[50],i,j,t;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
        for(i=0 ; i<n ; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0 ; i<n-1 ; i++)
        {
            for(j=0 ; j<n-1-i ; j++)
            {
                if(a[j] > a[j+1])
                {
                    t=a[j]; 
                    a[j]=a[j+1]; 
                    a[j+1]=t;
                }
            }
        }
    printf("Sorted list is: \n");
        for(i=0 ; i<n; i++)
        {
            printf("%d",a[i]);
            printf("\n");
        }
return 0;
}
