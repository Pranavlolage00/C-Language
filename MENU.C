#include<stdio.c>
#include<conio.c>
int main()
{
   int x,y,qu,rem,ch;
   clrscr();
   printf("\n enter two numbers.....:");
   scanf("%d%d",&x,&y);
   printf("---------------");
   printf("\n 1 equlity");
   printf("\n 2 less than");
   printf("\n 3 qutiont and reminder");
   printf("\n enter your choice ");
   scanf("%d",&ch);
   switch(ch)
   {
	case 1 : if(x==y)
		   printf("\n %d and %d are equal ",x,y);
		  else
		  printf("\n %d and %d are not equal",x,y);
		  break;
       case 2 : if(x<y)
		 printf("\n %d is less than %d ",x,y);
		else
		    printf("\n %d is less than %d",y,x);
		    break;

}