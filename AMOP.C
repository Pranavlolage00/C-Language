#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,res;
     clrscr();
     printf("enter two numbers...");
     scanf("%d%d",&a,&b);
     res=a+b;
     printf(" \n addition of nos=%d",res);
     res=a-b;
     printf("\n substraction of nos=%d",res);
     res=a*b;
     printf("\n multiplication of nos=%d",res);
     res=a/b;
     printf("\n division of nos=%d",res);
     res=a%b;
     printf("\n reminder of nos=%d",res);
     getch();
     return 0;

}