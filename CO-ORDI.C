#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
     float x1,y1,x2,y2,dist;
     clrscr();
     printf("\n enter the co-ordinates of point 1....:");
     scanf("%f%f",&x1,&y1);
     printf("\enter the co-ordinates of point 2....");
     scanf("%f%f",&x2,&y2);
     dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
     printf("\n distance between point 1 and point 2=%f",dist);
     getch();
     return 0;
}


