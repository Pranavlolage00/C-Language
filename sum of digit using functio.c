// write a c program to find sum of digits of given number using user defined function
#include<stdio.h>
int sum_digit(int n)
{
	int s=0,d;
	while(n>0)
	{
		d=n%10;
		 s=s+d;
		n=n/10;
	}
	return s;
}
int main()
{
	int s,n;
	printf("enter your number :");
	scanf("%d",&n);
	s=sum_digit(n);
	
	printf("sum of digit=%d",s);
	
}
