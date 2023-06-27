// write a c program to accept a number and count number of even , odd and zero digits within  that number  
#include<stdio.h>
int main()
{
	int d,zero=0,even=0,odd=0,n;
	printf("enter number :");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		if(d==0)
		{
			zero++;
	    }
		else if(d%2==0)
		{
			even++;
	    }
		else if(d%2!=0)
		{
			odd++;
	    }
       n=n/10;		
	}
	printf("\n even count=%d",even);
	printf("\n odd count=%d",odd);
	printf("\n zero count=%d",zero);
}
