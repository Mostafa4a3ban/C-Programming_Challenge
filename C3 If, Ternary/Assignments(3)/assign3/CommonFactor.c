#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("Please Enter two numbers: \n");
	scanf("%d%d", &num1, &num2);
	
	if((num1/num2)%2 == 0)
	{
		printf("The numbers have a common factor");
	}
	else 
	{
		printf("No Factors bt the numbers!");
	}
	return 0;
}