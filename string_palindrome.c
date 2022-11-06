#include<stdio.h>
#include<string.h>
int main()
{
        int i, len, flag=0;
        char str[50];
    printf("Enter the string: ");
    scanf("%s", str);
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            if (str[i] != str[len-i-1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("String is paindrome.");
        }
        else
        {
            printf("String is not a paindrome.");
        }
return 0;
}