#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=20,c;
    clrscr();
    a++;
    printf("\n value of(post increment)a=%d",a);
    ++a;
    printf("\n value of(pre decrement)a=%d",a);
     c=(a++)+(--b)
    printf("\n value of c=%d a=%d b=%d",c,a,b);
     c=(++b)+(b++)+(a++);
     printf("\n value of c=%d a=%d b=%d",c,a,b);
      getch();
       return 0;
     
}
     


