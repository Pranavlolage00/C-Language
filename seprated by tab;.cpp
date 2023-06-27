#include<stdio.h>
int main()
{
    int r=0,d,n;
	printf("enter number :");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
printf("seprated by tab=");
  while(r>0)
  {
  	n=r%10;
  	printf("%d\t",n);
  	r=r/10;
  	
  	
  }
}
