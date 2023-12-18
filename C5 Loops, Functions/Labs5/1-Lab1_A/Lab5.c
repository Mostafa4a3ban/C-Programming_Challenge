#include <stdio.h>

int add(int x, int y);

int main()
{
	int A=10 , B =10;
	int sum = add(A,B);
	printf("The summation is : %d", sum);
	
	return 0;
}

int add(int x, int y)
{
	return (x+y);
}