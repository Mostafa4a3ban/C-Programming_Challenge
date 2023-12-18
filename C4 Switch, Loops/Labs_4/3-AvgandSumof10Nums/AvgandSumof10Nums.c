#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x = 0, i =0, sum =0, Avg = 0;
	printf("Please Enter 10 numbers:-\n");
	
	for(i =0; i< 10; i++)
	{
		scanf(" %d",&x);
		sum+= x;
	}
	Avg = sum/i;
	printf("The Sum is %d , and the Average is %d", sum, Avg);

	return 0;
}