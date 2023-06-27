#include<stdio.h>
#include<conio.h>
int main()
{
     int num;
     clrscr();
     printf("\n enter any number :");
     scanf("%d",&num);
     printf(" \n flipped bits number =%d",~num);
       getch();
       return 0;
}