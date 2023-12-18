#include <stdio.h>

int add(int x, int y);
int multiplication(int x, int y);
int subtraction(int x, int y);
int division(int x, int y);

int main()
{
	while(1)
	{
	int x, y;
	char operation;
	printf("Enter two numbers:- \n");
	scanf("%d%d", &x, &y);
	printf("Choose an operation: s,a,m,d\n");
	scanf(" %c", &operation);
	switch(operation)
	{
		case 'a':printf("The Result is: %d\n",add(x,y)); 
		break;
		case 's':printf("The Result is: %d\n",subtraction(x,y)); 
		break;
		case 'm':printf("The Result is: %d\n",multiplication(x,y)); 
		break;
		case 'd':printf("The Result is: %d\n",division(x,y)); 
		break;
		default:printf("Error");
		break;
	}
	}
}

int add(int x, int y)
{
	return (x+y);
}
int multiplication(int x, int y)
{
	return (x*y);
}
int subtraction(int x, int y)
{
	return (x - y);
}
int division(int x, int y)
{
	return (x/y);
}