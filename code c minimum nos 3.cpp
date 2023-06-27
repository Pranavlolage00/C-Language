#include<stdio.h>
int main()
{
	int a,b,c,*pa,*pb,*pc;
	printf("enter 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	
	if(*pa<*pb && *pa<*pc)
	      printf("\n minimum numbers=%d",*pa);
	else if(*pb<*pa&& *pb<*pc)
	      printf("\n minimum numbers=%d",*pb);
    else if(*pc<*pa && *pc<*pb)
	      printf("\n minimum numbers=%d",*pc);	
		       
}
