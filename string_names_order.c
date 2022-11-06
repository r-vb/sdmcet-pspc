#include<stdio.h>
#include<string.h>
int main()
{
        int n, i, j, value;
        char name[50][10], temp[10];
    printf("Enter total number of names: ");
    scanf("%d",&n);
    printf("Enter names:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%s", name[i]);
        }
        //re-arranging
        for (i = 0; i < n-1; i++)
        {
            for (j = 0; j < n-i-1; j++)
            {
                value = strcmp(name[j],name[j+1]);
                if (value > 0)
                {
                    strcpy(temp,name[j]);
                    strcpy(name[j],name[j+1]);
                    strcpy(name[j+1],temp);
                }
            }
        }
    printf("Sorted list of names in alphabetical order:\n");
        for (i = 0; i < n; i++)
        {
            printf("%s\n",name[i]);
        }
return 0;
}