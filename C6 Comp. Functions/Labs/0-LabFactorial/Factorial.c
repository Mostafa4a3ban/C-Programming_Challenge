#include <stdio.h>
int fact(int num);
int main()
{
	int num, Result = 0;
	printf("Enter a number to factorial it : \n");
	scanf("%d", &num);
	Result = fact(num);
	printf("The Factorial Result is: %d \n", Result);
	
	return 0;
}

int fact(int num)
{
	if((num == 1) || (num == 0))
	{
		return 1;
	}
	else 
	{
		return (num * fact(num-1));
	}
}