#include<stdio.h>
#include<conio.h>
int main()
{
     int num;
     clrscr();
     printf("\n enter the number :");
     scanf("%d",&num);
     if(num&1==1)
	  printf(" %d is odd(1)",num);
     else
	    printf(" %d is even(0)",num);
       getch();
       return 0;
}