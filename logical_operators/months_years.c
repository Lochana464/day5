#include<stdio.h>
int main()
{
int days;
int months =days%365/30;
int years = days/365;
int weeks =days%365/30/7 ;
	
printf("enter the days:");
scanf("%d",&days);
printf("days are %d\n",days);
	
	
printf("months are: %d\n",days%365/30);
printf("weeks are :%d\n",days%365/30/7);
printf("years are :%d/n",days/365);
	
return 0;
}
	
