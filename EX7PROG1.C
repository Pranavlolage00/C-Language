#include<stdio.h>
#include<conio.h>
void main ()
{
int a[20],n,i,sum=0;
clrscr();
printf("Enter how many number you want in array: ");
scanf("%d",&n);
printf("Enter array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
     {
       sum=sum+a[i];
     }
     printf("\n Sum of all =%d",sum);
getch();
}
