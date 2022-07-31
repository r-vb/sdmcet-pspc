#include<stdio.h>
#include<math.h>
int main()
{
        int x1,x2,y1,y2;
        float dist;
    printf("Enter the coordinates of first point x1 and y1: ");
    scanf("%d%d",&x1&y1);
    printf("Enter the coordinates of second point x2 and y2: ");
    scanf("%d%d",&x2,&y2);
        dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between the two points is %.3f units.",dist);
return 0;
}
