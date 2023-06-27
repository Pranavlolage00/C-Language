#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    clrscr();
    printf("enter number..");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("first number=%d",a);
    printf("second number =%d",b);
    getch();
    return 0;
}



