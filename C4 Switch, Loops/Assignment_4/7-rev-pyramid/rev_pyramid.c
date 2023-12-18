#include <stdio.h>

int main()
{
	int i= 0, j = 0,x;
	printf("Entter a number: \n");
	scanf("%d", &x);
	for(j = x; j >= 0; j--)
	{
		for(i = j; i >= 0; i--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}