#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float f,c,k;
    clrscr();
    printf("\n enter tempreature in fhernahit :");
    scanf("%f",&f);
     c=(float)0.5/.09*(f-32);
     k=c+273.15;
     printf("\n tempreture in fhernahit=%f",f);
     printf("\n tempreture in celcius=%f",c);
     printf("\n tempreture in kelvin=%f",k);
     getch();
     return 0;
}



