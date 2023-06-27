#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,res;
    char choice;
    clrscr();
    printf("\n enter two numbers ");
    scanf("%d%d",&n1,&n2);
    printf("\n += addition \n -= subtraction \n *= multiplication \n /= division" );
    printf("-----------------------");
    printf("\nenter your choice ");
    scanf("%c",&choice);
    switch(choice)
    {
       case '+' : res=n1+n2;
       printf("\n addition=%d",res);
       break;
       case '-' : res=n1-n2;
       printf("\n subtraction=%d",res);
       break;
       case '*' : res=n1*n2;
       printf("\n multiplication=%d",res);
       break;
       case '/' : res=n1/n2;
       printf("\n division=%d",res);
       break;
       default:printf("invallid choice");
    }
       getch();
       return 0;
}

