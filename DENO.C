#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int amt,one,five,ten,ramt;
    clrscr();
    printf("\n enter the amount to be withdrawn");
    scanf("%d",&amt);

    ten=amt/10;
    ramt=amt%10;
    five=ramt/5;
    one=ramt%5;

    printf("\n total no of currency notes are:");
    printf(" ten=%d \n five=%d \n one=%d",ten,five,one);
    getch();
    return 0;
}



