#include <stdio.h> 

int main()
{
	int x = 0, i = 1, mul = 0;
	printf("Enter the Table Number:-\t   ");
	scanf("%d", &x);
	for(i = 1 ; i <= 12 ; i++)
	{
		mul = i * x;
		printf("%d\n", mul);
	}
	
	
	return 0;
}