#include<stdio.h>
int main()
{
        int ia1,ia2,ia3,cta,small,cie;
    printf(";Enter your IA1, IA2 and IA3 marks respectively: ")
    scanf("%d%d%d",&ia1,&ia2,&ia3);
    printf("Enter your CTA marks: ");
    scanf("%d",&cta);
        small=ia1;
    if(small>ia2)
        small=ia2;
    if(small>ia3)
        small=ia3;
            cie=ia1+ia2+ia3+cta-small;
    printf("Your CIE marks are %d.",cie);
return 0;
}
