/*
**ELECTRICAL POWER DISTRIBUTION COMPANY BILLING FORMAT:
         CONSUMPTION UNITS         RATE OF CHARGE
         0-200                      RS. 0.50 PER UNIT
         201-400                    RS. 100 + RS. 0.65 PER UNIT GREATER THAN 200
         401-600                    RS. 230 + RS. 0.80 PER UNIT GREATER THAN 400
         601 & ABOVE                RS. 390 + RS. 1.00 PER UNIT GREATER THAN 600
*/

#include<stdio.h>
int main()
{
        int units;
        float amount;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
        if(units<=200)
            amount=units*0.50;
    else if(units<=400)
        amount=100+(units-200)*0.65;
    else if(units<=600)
        amount=230+(units-400)*0.80;
        else
            amount=390+(units-600)*1.00;
    printf("Billed amount is %.2f",amount);
return 0;
}
