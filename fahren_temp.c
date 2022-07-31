/*
        FORMULA IS F=degC*(1.8)+32
*/

#include<stdio.h>
int main()
{
        float c,fah;
    printf("Enter value of deg Celsius: ");
    scanf("%f",&c);
        fah=c*(1.8)+32;
    printf("%.2f deg Celsius is %.2f deg in Fahrenheit.",c,fah);
return 0;
}
