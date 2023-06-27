#include<stdio.h>
#include<conio.h>
int main()
{
     float bsal,tax;
     clrscr();
     printf("enter the basic salary of an employee...:");
     scanf("%f",&bsal);
     if(bsal<150000)
	   tax='0';
     if(bsal>=150000&&bsal<=300000)
	    tax=bsal*20/100;
     if(bsal>300000)
	    tax=bsal*30/100;
     printf("\n income tax=%f",tax);
     getch();
     return 0;

}



























