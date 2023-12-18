#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x = 0; 
	
	while(x != (3*4))
	{
		printf("Enter it Again\n");
		scanf("%d", &x);
	}
	printf("Thank You!");
	
	return 0;
}