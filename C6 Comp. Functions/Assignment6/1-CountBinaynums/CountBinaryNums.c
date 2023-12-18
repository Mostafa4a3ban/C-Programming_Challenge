#include <stdio.h>

int Count_Binary(int num);

int main()
{
	int x, Count = 0;
	printf("Enter a number :\n");
	scanf("%d", &x);
	
	Count = Count_Binary(x);
	
	printf("Number of 1's in %d is %d", x, Count);
	return 0;
}

int Count_Binary(int num)
{
	int i = 0, Count = 0;
	
	while(i < 32)
	{
		if((((num)&(1<<i))>>i) == 1)
		{
			Count++;
		}
		else
		{
		}
		i++;
	}
	return Count;
}