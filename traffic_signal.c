#include<stdio.h>
int main()
{
        char signal;
    printf("Enter R,Y or G: ");
    scanf("%c",&signal);
        switch (signal)
        {
        case 'R':
        case 'r': printf("STOP");
                break;
        case 'Y':
        case 'y': printf("GET READY");
                break;
        case 'G': 
        case 'g': printf("GO");
                break;
        default : printf("INVALID INPUT! RETRY.");
            break;
        }
return 0;
}
