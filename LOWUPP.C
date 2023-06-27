#include<stdio.h>
#include<conio.h>
int main()
{
     char ch;
     clrscr();
     printf("enter any charetctar :");
     scanf("%c",&ch);
     if(ch>=48&&ch<=58)
       printf("\n input charectar is digit ");
     if(ch>=97&&ch<=122)
       printf("\n input charectar is loweer case");
     if(ch>=65&&ch<=90)
       printf("input charectar is uppercase");
       getch();
     return 0;
}





























