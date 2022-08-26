#include <stdio.h>
int main()
{
    int n, rem, i, k, flag, count = 0;
    printf("Enter last number: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (k = 2; k <= i / 2; k++)
        {
            rem = i % k;
            if (rem == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count = count + 1;
            printf("%d ", i);
        }
    }
    printf("\nTotal %d prime numbers.", count);
return 0;
}