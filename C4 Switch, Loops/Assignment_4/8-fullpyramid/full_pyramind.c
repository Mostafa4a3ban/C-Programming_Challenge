#include <stdio.h>

int main()
{
	int i = 0, j = 0, x;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	for(j = 0; j < x; j++)
	{
		if(x%2 ==0)
		for(i = 0; i <= ((x-j)/2);i++)
		{
			printf(" ");
		}
		for(i = 0; i <= j ; i++)
		{
			printf("*");
		}
		for(i = 0; i <= (((x-j)/2)+1);i++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}