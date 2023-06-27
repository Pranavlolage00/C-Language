#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,res;
     clrscr();
     printf("enter 2 numbers:");
     scanf("%d%d",&a,&b);
     res=a+b;
     printf("\n a+b=%d",res);
     res=a|b;
     printf("\n a|b=%d",res);
     res=a^b;
     printf(" \n a^b=%d",res);
     res=a<<3;
     printf("\n left shift of a a<<3=%d",res);
     res=b>>2;
     printf("\n right shift of a b>>2=%d",res);
     res=~a;
     printf("\n ones compliment of a=%d",res);
     getch();
     return 0;
}