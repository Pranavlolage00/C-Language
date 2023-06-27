#include<stdio.h>
#include<conio.h>
int main()
{
    float u,a,t,v,s;
    clrscr();
    printf("enter initial velocity ..:");
    scanf("%f",&u);
    printf("enter the acceleration...:");
    scanf("%f",&a);
    printf("enter the time..");
    scanf("%d",&t);
    v=u+a*t;
    s=u+a*t*t;
    printf("\n final velocity=%f",v);
    printf("\n distance traveled=%f",s);
    getch();
    return 0;
 }

