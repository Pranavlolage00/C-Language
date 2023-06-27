#include<stdio.h>
#include<conio.h>
int main()
{
     int n,sum=0,d,num;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);

     while(n>0)
     {
       d=n%10;
       sum=sum+d*d*d;
       n=n/10;
     }
     if(num=sum)
       printf("\n %d is Armstrong number",num);
     else
     printf("\n %d is not Armstrong number",num);
getch();
return 0;
}













