#include<stdio.h>
int main()
{
        char st1[50],st2[50],i,j;
    printf("Enter string-1 and string-2 : ");
    scanf("%s%s", st1, st2);
        i = 0;
            while ( st2[ i ] != '\0' )
            {
                i++;
            }
        j = 0;
        while ( st1[ j ] != '\0' )
        {
            st2[ i ] = st1[ j ];
            i++;
            j++;
        }
            st2[ i ] = '\0';
        printf("\nAfter Concatenation: %s", st2);
return 0;
}