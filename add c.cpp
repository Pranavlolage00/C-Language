# include <stdio.h>
int main()
{
	float x1,y1,x2,y2,d;
    printf("enter the first co-ordinates =");
    scanf("%f",&x1,&y1);
    printf("enter the second co-ordinates =");
    scanf("%f",&x2,&y2);
    d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("distence=%f",d);
    
}
