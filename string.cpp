#include<stdio.h>
int main()
{
	char s1[10];
	int i,cnt=0;
	printf("enter your string :");
	scanf("%s",&s1);
	printf(" \n string...=");
	for(i=0; s1[i]!='\0'; i++)
	{
		cnt++;
	}
	printf("count  lenghth of string=%d",cnt);
	
}

