#include<stdio.h>
int main()
{
                float a,b;
                char operator;
        printf("Enter the two numbers: ");
        scanf("%f%f",&a,&b);
        printf("Enter required operator (+,-,*,/): ");
        scanf(" %c", &operator);
                switch (operator)
                {
                case '+': printf("Sum is %.4f", a+b);
                        break;
                case '-': printf("Difference is %.4f", a-b);
                        break;
                case '*': printf("Product is %.4f", a*b);
                        break;
                case '/': printf("Division gives %.4f", a/b);
                        break;
                default : printf("INVALID OPERAND! RETRY."); 
                        break;
                }
return 0;
}
