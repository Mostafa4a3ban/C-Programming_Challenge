#include <stdio.h>

int Count_Max_Zeros(int num);

int main()
{
	int num, Max_Zeros = 0;
	printf("Enter a number: \n");
	scanf("%d", &num);
	Max_Zeros = Count_Max_Zeros(num);
	printf("The max num of Zeros is :  %d", Max_Zeros);
	
	return 0;
}

int Count_Max_Zeros(int num)
{
	int bit = 0, ones_Detect= 0 , Zeros_Count = 0, Compare = 0;
	for(int i = 0; i != 32; i++)
	{
		bit = (((num)&(1<<i))>>i);
		if(bit == 0)
		{
			Compare++;
			ones_Detect = 0;
		}
		else
		{
			ones_Detect = 1;
		}
		if(Zeros_Count < Compare)
		{
			Zeros_Count = Compare;
		}
		else
		{
		}
		if(ones_Detect == 1)
		{
			Compare = 0;
		}
		else
		{
		}
	}
	
	return Zeros_Count;
}