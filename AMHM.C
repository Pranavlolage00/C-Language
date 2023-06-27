#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,am,hm;
    clrscr();
    printf("enter two numbers ...:");
    scanf("%d%d",&a,&b);
    am=(a+b)/2;
    hm=a*b/(a+b);
    printf("arithmatic mean=%d",am);
    printf("harmonic mean=%d",hm);
    getch();
    return 0;
 }
