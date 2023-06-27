#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],r,c,i,j,s=0;
	printf("enter numbers of rows columns");
	scanf("%d%d",&r,&c);
	printf("enter matrix");
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }
     }
  

	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 {
	 if(i==j)
	 s=s+a[i][j];
     }
	 }
	printf("\n sum of daigonal element=%d",s);
 }
