#include<stdio.h>
#include<conio.h>
int main()
{
     int x,y,mult=0,i;
     clrscr();
     printf("Enter the value of x and y:");
     scanf("%d%d",&x,&y);
     i=1;
     while(i<=y)
     {
       mult=mult+x;
       i++;
     }
       printf("\n Multiplication of two number without using * operator is %d",mult);
getch();
return 0;
}













