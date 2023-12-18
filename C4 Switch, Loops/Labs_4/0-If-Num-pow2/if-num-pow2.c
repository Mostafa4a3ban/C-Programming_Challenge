#include <stdio.h>

int main()
{
	int x;
	
	printf("Please Enter a number:- \n");
	scanf("%d", &x);
	
	if((x/2)%2== 0)
	{
		printf("Number x is 2 power", x);
	}
	else
	{
		printf("Number x is not a 2 power", x);
	}
	
	return 0;
}