#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter the two numbers");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		printf("%d is bigger than %d",num1,num2);
		
	}
	else
	{
		printf("%d is bigger than %d",num2,num1);
		
	}
}
