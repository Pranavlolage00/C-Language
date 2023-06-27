#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char ch1,ch2;
clrscr();
for(i=1;i<=4;i++)
   {
      ch1='A';
      ch2='a';
    for(j=1;j<=i;j++)
      {
      printf("\t%c%c",ch1,ch2);
      ch1++;
      ch2++;
      }
      printf("\n");
   }
getch();
}
