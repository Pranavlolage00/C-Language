#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    float l,b,h,area,vol,r;
    clrscr();
    printf("------------------------");

    printf("\n 1. area of squre");
    printf("\n 2. area of rectangle ");
    printf("\n 3. area of traingle ");
    printf("-------------------");
    printf("enter the choice:");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1: area=l*l;
	    printf("\n enter the length ");
	    scanf("%f",&l);
	    printf("\n area of squre=%f",area);
	    break;
    case 2: printf("\n enter the length and bredth of rectangle:");
	     scanf("%f%f",&h,&b);
	     area=l*b;
	     printf("\n area of reactangle=%f",area);
	    break;
    case 3: vol=(4/3)*3.14*r*r*r;
	    printf("\n volume of sphere=%f",vol);
	    break;
    default : printf("\n wrong input...");
}
       getch();
       return 0;
   }




