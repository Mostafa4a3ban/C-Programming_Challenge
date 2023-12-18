#include <stdio.h>

int main()
{
	int num, i, count = 0;
	printf("Enter a Number:");
	scanf("%d", &num);
	
	for(i = 0; i != num; i++)
	{
		if((i*i) == num)
		{
			count++;
		}
		else{}
	}
	if(count != 0)
	{
		printf("%d is a perfect Square", num);
	}
	else
	{
		printf("%d is not a perfect Square", num);
	}
	
	return 0;
}