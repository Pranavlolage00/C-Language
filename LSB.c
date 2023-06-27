#include<stdio.h>
#include<stdio.h>
int main()
{
    int num;
    clrscr();
    printf("\n enter any number....");
    scanf("%d",&num);
    if(num&1)
         printf("\n LSB of %d is set(1)",num);
    else 
         printf("\n LSB of %d is unset(0)",num);
    getch();
    return 0;

}