#include<stdio.h>
int main()
{
        int i,num,x,large;
    printf("How many numbers?\n");
    scanf("%d",&x);
        large=0;
            for (i = 1; i <= x; i++)
            {
                printf("Enter %d number: ",i);
                scanf("%d",&num);
                    if(num>large)
                    {
                        large=num;
                    }
            }
    printf("The largest number is %d.",large);
return 0;
}
