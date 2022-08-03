/* TO PRINT PRIME NUMBERS WITHIN THE INPUT RANGE */

#include <stdio.h>
int main()
{
    int n1, n2, rem, i, l, count;
    printf("Enter starting and last numbers: ");
    scanf("%d%d", &n1, &n2);
    printf("Prime numbers from %d and %d are: ", n1, n2);
    for (i = n1; i <= n2; i++)
    {
        count = 0;
        for (l = 2; l <= i / 2; l++)
        {
            rem = i % l;
            if (rem == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
            printf("%d ", i);
    }
    return 0;
}
