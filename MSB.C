#include<stdio.h>
#include<conio.h>
int main()
{
     int num,msb;
     clrscr();
     printf("\n enter any number ");
     scanf("%d",&num);
     msb=1 << (msb -1);
     if(num&msb==1)
	  printf("\n msb of %d is set(1)",num);
     else
	   printf("\n msb of %d is unset(0)",num);
     getch();
     return 0;

}