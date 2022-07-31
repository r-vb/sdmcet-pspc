#include <stdio.h>
int main()
{
            int seconds, temp, hh, mm, ss;
        printf("Enter value in seconds: ");
        scanf("%d", &seconds);
            temp = seconds / 60;
            hh = temp / 60;
            mm = temp % 60;
            ss = seconds % 60;
        printf("Time in HH-MM-SS format is %d:%d:%d", hh, mm, ss);
return 0;
}
