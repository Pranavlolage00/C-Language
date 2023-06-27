#include<stdio.h>
#include<conio.h>
int main()
{
     int n,rev=0,d,num;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     num=n;
     while(n>0)
     {
       d=n%10;
       rev=rev*10+d;
       n=n/10;
     }
     if(num==rev)
       printf("\n %d is a palindrum number",num);
     else
       printf("\n %d is not a palindrum number",num);
getch();
return 0;
}













