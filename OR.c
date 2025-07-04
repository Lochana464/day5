#include <stdio.h>
void main()
{
int a,stmt_1,stmt_2;
float b;
double c;	
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%f",&b);	
printf("enter the value of c:");
scanf("%lf",&c);	
stmt_1=(a-b)>c;
stmt_2=(a+b)<c;	
printf("the output of stmt_1:%d\n",stmt_1);
printf("the output of stmt_2:%d\n",stmt_2);
printf("the output of stmt_1||stmt_2: %d",stmt_1||stmt_2);	
}

	
 
	
