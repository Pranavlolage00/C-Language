#include<stdio.h>
#include<conio.h>
int main()
{
     char ch;
     clrscr();
     printf("\n enter any charectar....:");
     scanf("%c",&ch);
     printf("\n the previous charectar is %c", ch-1);
     printf("\n the next charectar is %c", ch+1);
	  getch();
      return 0;
      }


