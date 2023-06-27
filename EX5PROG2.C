#include<stdio.h>
#include<conio.h>
int main()
{
     int n1,n2,sum=0,i;
     clrscr();
     printf("Enter any two number:");
     scanf("%d %d",&n1,&n2);
     i=1;
     while(i<=n2)
     {
       sum=sum+i;
       i++;
     }
printf("Sum of all between %d to %d = %d",n1,n2,sum);

getch();
return 0;
}













