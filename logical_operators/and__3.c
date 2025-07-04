#include<stdio.h>
int main()
{
int a,b,c,d,stmt_1,stmt_2;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
printf("enter the value of d");
scanf("%d",&d);
stmt_1=a>b;
stmt_2=c<d;
printf("stmt_1 is a>b:%d\n",stmt_1);
printf("stmt_2 is c<d:%d\n",stmt_2);
return 0;
}