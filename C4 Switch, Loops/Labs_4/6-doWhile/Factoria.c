#include <stdio.h>

int main()
{
	int x, fact = 1;
	printf("Enter a number:\n");
	scanf("%d", &x);
	
	do{
		fact *=(x);
		x--;
	}
	while(x > 1);
	printf("Factorial is: %d", fact);
	
	
	return 0;
}