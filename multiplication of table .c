// write a c program to accept two numbers and display multiplication of table
#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	printf("\nmultiplication table =\n");
	for(i=1; i<=10; i++)
	{
		for(j=a; j<=b; j++)
		{
			printf(" f%d\t",i*j);
			
		}
		printf("\n ");
	}
}
