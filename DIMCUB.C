#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,h,a,v;
    clrscr();
    printf("enter length,bredth,and height: ");
    scanf("%d%d%d",&l,&b,&h);
    a=2*l*b+b*h+l*h;
    v=l*h*b;
    printf("surface area =%d",a);
    printf("volume =%d",v);
    getch();
    return 0;
    }

























