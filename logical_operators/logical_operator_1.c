#include<stdio.h>
int main()
{
int a;
int b;
int c;
int stmt_1;
int stmt_2;
	
printf("enter the value of a:");
scanf("%d",&a);
	
printf("\n enter the value of b:");
scanf("%d",&b);
	
printf("\n enter the value of c:");
scanf("%d",&c);
	
printf("\n enter the value of d:");
scanf("%d",&d);
		
stmt_1=a<b;
stmt_2=c<d;
	
printf("output od stmt_1 is :%d\n", stmt_1);
printf("output of stmt_2 is :%d\n", stmt_2);
printf("stmt_1 && stmt_2 is :%d\n", stmt_1 && stmt_2);
	
return 0;
}
