#include <stdio.h>

int Get_Max(int x, int y);

int main()
{ 
	int A, B, max;
	printf("Enter Two Numbers : ");
	scanf("%d%d", &A, &B);
	
    max = Get_Max(A, B);
	printf("The max num is:  %d", max);
	return 0;
}

int Get_Max(int x, int y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}