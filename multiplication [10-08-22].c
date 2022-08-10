/* Printing of multiplication results from 2 table to 10 */
#include<stdio.h>
int main()
{
        int i,j;
    for ( i = 1; i <= 10; i++)
    {
        for ( j = 2; j <= 10; j++)
        {
            printf("%3d ",i*j);
        }
    printf("\n");    
    }
return 0;
}
