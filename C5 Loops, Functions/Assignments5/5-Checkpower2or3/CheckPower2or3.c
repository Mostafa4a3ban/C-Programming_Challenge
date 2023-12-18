#include <stdio.h>
int Check_Power(int num);
int main()
{
	int num, Value = 0;
	printf("Please Enter a number: \n");
	scanf("%d", &num);
	Value = Check_Power(num);
	printf("%d", Value);
	
	return 0;
}

int Check_Power(int num)
{

	if(num%3 == 0)
	{
		if(((num/3)%3 == 0) || num == 3)
		{
			return 0;
		}
	}
	else if((num%2 == 0))
	{
		if(((num/2)%2) == 0 || (num == 2))
		{
			return 1;
		}
	}
	else
	{
		return -1;
	}
}