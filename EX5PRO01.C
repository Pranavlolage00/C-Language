#include<stdio.h>
#include<conio.h>
int main()
{
     int n,d,sum=0;
     clrscr();
     printf("Enter a number:");          // ex 5  first
     scanf("%d",&n);
     while(n>0)
     {
       d=n%10;
       sum=sum+d;
       n=n/10;
     }
printf("Sum of digit of given number =%d",sum);

getch();
return 0;
}













