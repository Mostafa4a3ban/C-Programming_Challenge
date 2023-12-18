#include <stdio.h>

int main()
{
	int number, power, Result = 1, i;
	printf("Please Enter a number:  ");
	scanf("%d", &number);
	printf("Please Enter a power:  ");
	scanf("%d", &power);
	
	for(i = power; i > 0; i--)
	{
		Result *= number;
	}
	
    printf("The Result is:  %d", Result);
	return 0;
}