#include<stdio.h>
int main()
{
        int len, i;
        char str[50];
    printf("Enter your string: ");
    scanf("%s", str);
        for (i = 0; str[i] != '\0'; )
        {
            i++;
        }
        len = i;
    printf("Length of the string '%s' is %d", str, len);
return 0;
}