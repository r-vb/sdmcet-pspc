#include<stdio.h>
int main()
{
        int days,yy,mm,dd,temp;
    printf("Enter the number of days: ");
    scanf("%d",&days);
        yy=days/365;
        temp=days%365;
        mm=temp/30;
        dd=temp%30;
    printf("%d days in YY-MM-DD format is %d-%d-%d.",days,yy,mm,dd);
return 0;
}