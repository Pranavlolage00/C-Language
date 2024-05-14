#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],n,i,t,pass,i1=0,i2=0,j;
   clrscr();
   printf("\nenter limit:");
   scanf("%d",&n);
   printf("\nenter n elements in an array:");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("\ndisplay n elements:");
   for(i=0; i<n; i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\nenter target to return index:");
   scanf("%d",&t);
   for(i=0; i<n; i++)
   {
      for(j=1; j<n; j++)
      {
	if(a[i]+a[i+1]==t)
	{
	    i1=i;
	    i2=j;
	    break;
	}
      }
  }
  printf("\nindex 1=%d",i1);
  printf("\nindex 2=%d",i2);
   getch();
   return 0;

}