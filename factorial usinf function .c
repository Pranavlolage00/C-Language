// write a c program to accept number and find factorial using user difined function...
#include<stdio.h>
int factorial(int n)
{
int f=1,d;
while(n>0)
{
	f=f*n;
	n--;
}
return f;
}
int main()
{
	int ans ,n;
	printf("enter number ");
	scanf("%d",&n);
	ans=factorial(n);
	printf("factorial=%d",ans);
	
}
