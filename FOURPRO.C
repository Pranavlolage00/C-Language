#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    float r, area, circum,vol;
    clrscr();
    printf("enter radius of circle......");
    scanf("%f",&r);

    printf("\n-------------------");
    printf("\n 1. area of circle");
    printf("\n 2. circumfernce of circle ");
    printf("\n 3. volume of sphere ");
    printf("-------------------");
    printf("enter the choice:");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1: area=3.14*r*r;
	    printf("\n area of circle=%f",area);
	    break;
    case 2: circum=2*3.14*r*r;
	    printf("\n circumferance of circle=%f",circum);
	    break;
    case 3: vol=(4/3)*3.14*r*r*r;
	    printf("\n volume of sphere=%f",vol);
	    break;
    default : printf("\n wrong input...");
}
       getch();
       return 0;
   }




