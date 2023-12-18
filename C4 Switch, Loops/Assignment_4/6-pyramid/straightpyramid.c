#include <stdio.h>

int main()
{
	int i= 0, j = 0,x;
	printf("Entter a number: \n");
	scanf("%d", &x);
	for(j = 0; j < x; j++)
	{
		for(i = 0; i <= j; i++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}