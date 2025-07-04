#include<stdio.h>
int main()
{
int a= 50;
int b =40; 
int c= 30;
int stmt_1,stmt_2;
printf("enter the value of a");
scanf("%d",&a);
	
printf("enter the value of b");
scanf("%d",&b);
	
printf("enter the value of c");
scanf("%d",&c);
stmt_1=a<b;
stmt_2=b>c;

printf("the output of stmt_1:%d\n",stmt_1);
printf("the output of stmt_2:%d\n",stmt_2);
	
printf("the output of stmt_1||stmt||2:%d",stmt_1||stmt_2);
return 0;
}