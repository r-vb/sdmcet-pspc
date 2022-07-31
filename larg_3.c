#include <stdio.h>
int main()
{
    int a,b,c,lar;
    printf("Enter three different values: ");
    scanf("%d%d%d",&a,&b,&c);
        lar=a;
    if (lar<b)
        lar=b;
    if (lar<c)
        lar=c;
    printf("%d is largest among them.",lar);
    return 0;
}
