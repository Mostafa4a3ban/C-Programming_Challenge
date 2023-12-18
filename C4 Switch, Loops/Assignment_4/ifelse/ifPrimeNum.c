#include <stdio.h>

int main()
{
	int num, i, count = 0;
	printf("Enter a Number:");
	scanf("%d", &num);
	
	if(num%2 != 0)
	{
		for(i = num-1; i > 1; i--)
		{
			if(num%i == 0)
			{
				count++;
			}
			else
			{
				
			}
		}
		if(count == 0)
		{
			printf("%d is Prime", num);
		}
		else{
			printf("%d is not Prime", num);
		}
	}
	else{
		printf("%d is not Prime", num);
	}
	
	return 0;
}