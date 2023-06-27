#include<stdio.h>
#include<conio.h>
int main()
{
    int r,h,v,a;
    clrscr();
    printf("enter the radius and height:");
    scanf("%d%d",&r,&h);
    a=2*3.14*r*h+2*3.14*r*r;
    v=3.14*r*r*h;
    printf("area of cylinder=%d",a);
    printf("volume of cylindar=%d",v);
    getch();
    return 0;
}


























