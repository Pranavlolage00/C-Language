#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	int sal;
}e1[100];
 int main()
 {
 	int n,i,ch;
 	printf("enter limit :");
 	scanf("%d",&n);
 	for(i=0; i<n; i++)
 	{
 		printf("enter the emp no :");
 		scanf("%d",&e1[i].eno);
 		printf("enter the ename :");
 		scanf("%s",&e1[i].ename);
 		printf("enter the sal");
 		scanf("%d",&e1[i].sal);
	 }
	 do{
	 	printf("\n  1-display sal >5000 \n 2- display all emp \n enter your choice: ");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1 :  for(i=0; i<n; i++)
	 		          {
	 		          	if(e1[i].sal>5000)
	 		          	{
	 		          		printf("\n emp no=%d",e1[i].eno);
	 		          		printf("\n ename= %s",e1[i].ename);
	 		          		printf("\n sal=%d",e1[i].sal);
						}
					   }
					   break;
			case 2 : for(i=0; i<n; i++)
			        {
			        	printf("\n  emp eno=%d",e1[i].eno);
			        	printf("\n  ename=%s",e1[i].ename);
			        	printf("\n  sal=%d",e1[i].sal);
					}
			default : printf("invallid choice :");	
		 }
	 	
	 	
	 	
	 }while(ch<3);
 }
