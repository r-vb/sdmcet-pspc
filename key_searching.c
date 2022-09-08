#include<stdio.h>
int main()
{
        int key,a[50],n,i,proceed;
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    printf("Enter your array elements: ");
        for (i = 1 ; i <= n ; i++)  // NOTE:
        {                           // if for(i=0 ; ; ) then, ⤵
            scanf("%d", &a[i - 1]); //        scanf("%d", &a[i]);
        }
    printf("Enter key element to search: ");
    scanf("%d", &key);
    proceed = 0;
        for ( i = 1; i <= n; i++)            //To Check
        {
            if (key == a[i-1])
            {
                proceed = 1;
                break;
            }
        }
        if (proceed == 1)
        {
            for (i = 0 ; i < n ; i++)        //To Search
            {
                if (key == a[i])
                {   
                    break;  
                }
            }
    printf("Your key element %d is positioned at index %d in the array.", key,i);
        }
        else{
            printf("Unsuccessful Search!!\nKey element does not exist.");
        }
return 0;
}