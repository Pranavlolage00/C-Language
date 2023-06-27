#include<stdio.h>
#include<conio.h>
int main()
{
       int a,b;
       clrscr();
       printf("enter 2 numbers...");
       scanf("%d%d",&a,&b);
       printf("\n before swaping a=%d and b=%d",a,b);
       a=a^b;
       b=a^b;
       a=a^b;
       printf("\n after swaping a=%d and b=%d",a,b);
       getch();
       return 0;
}