#include<stdio.h>
#include<conio.h>
int main()
{
      char ch;
      clrscr();
      printf("enter any charectar ...:");
      scanf("%c",&ch);
      if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	    printf("\n input charectar is %c a vowel:",ch);
      else
      printf("\n input charetctar is %c a cosonent:",ch);
      getch();
      return 0;

}



























