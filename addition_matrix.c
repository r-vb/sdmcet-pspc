#include<stdio.h>
int main()
{
            int a[50][50],b[50][50],c[50][50],i,j,m,n,p,q;
        printf("Enter the order of the first matrix: ");
        scanf("%d%d",&m,&n);
        printf("Enter the order of the second matrix: ");
        scanf("%d%d",&p,&q);
        if(m == q && n == p)
        {
                printf("Enter the values of first matrix: ");
                for(i=0 ; i<m ; i++)
                {
                    for(j=0 ; j<n ; j++)
                    {
                        scanf("%d",&a[i][j]);
                    }
                }
                printf("Enter the values of second matrix: ");
                for(i=0 ; i<p ; i++)
                {
                    for(j=0 ; j<q ; j++)
                    {
                        scanf("%d",&b[i][j]);
                    }
                }
                for(i=0 ; i<m ; i++)
                {
                    for(j=0 ; j<n ; j++)
                    {
                        c[i][j] = (a[i][j] + b[i][j]);
                    }
                }
        printf("Resultant matrix is: \n");
                for(i=0 ; i<p ; i++)
                {
                    for(j=0 ; j<q ; j++)
                    {
                        printf("%3d ",c[i][j]);
                    }
                        printf("\n");
                }
        }
        else
                printf("Addition is not possible.");
return 0;
}