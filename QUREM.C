#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,qu,rem;
     clrscr();
     printf("\n enter 2 numbers to perform division..:");
     scanf("%d %d",&a,&b);
     qu=a/b;
     rem=a%b;
     printf("\n qutiont=%d",qu);
     printf("\n remaindar=%d",rem);
     getch();
     return 0;
}