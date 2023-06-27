#include<stdio.h>
#include<conio.h>
int main()
{
     int x,y,pow=1,i;
     clrscr();
     printf("Enter the value of x and y:");
     scanf("%d%d",&x,&y);
     i=1;
     while(i<=y)
     {
       pow=pow*x;
       i++;
     }
       printf("\n Result: %d",pow);
getch();
return 0;
}













