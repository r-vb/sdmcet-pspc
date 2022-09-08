#include<stdio.h>
int main()
{
        int a[20][20],b[20][20],c[20][20],i,j,m,n,p,q,k;
    printf("Enter matrix A size: ");
    scanf("%d%d",&m,&n);
    printf("Enter matrix B size: ");
    scanf("%d%d",&p,&q);
        if(n == p)
        {     
            printf("Enter matrix A: ");
                for(i=0 ; i<m ; i++)
                {
                    for(j=0 ; j<n ; j++)
                    {
                        scanf("%d",&a[i][j]);
                    }
                }
            printf("Enter matrix B: ");
                for(i=0 ; i<p ; i++)
                {
                    for(j=0 ; j<q ; j++ )
                    {
                        scanf("%d",&b[i][j]);
                    }
                }
                for(i=0 ; i<m ; i++)
                {
                    for(j=0 ; j<q ; j++)
                    {
                        c[i][j]=0;
                            for(k=0 ; k<n ; k++)
                            {
                                c[i][j] = c[i][j] + ( a[i][k] * b[k][j] );
                            }
                    }
                }
            printf("Matrix Multiplication result is: \n");
                for(i=0 ; i<m ; i++)
                {
                    for(j=0 ; j<q ; j++)
                    {
                        printf("%3d ",c[i][j]);
                    } 
                    printf("\n");
                }
        }
        else {     printf("Multiplication is not possible.");     }
return 0;
}