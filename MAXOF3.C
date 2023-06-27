#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    clrscr();
    printf("\n enter 3 numbers "  );
    scanf ("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
	    printf("\n a=%d is maximum no",a);
    if(b>a&&b>c)
	    printf("\n b=%d is maximum no",b);
    if(c>a&&c>b)
	     printf("\n c=%d is maximum no",c);
    getch();
    return 0;
}