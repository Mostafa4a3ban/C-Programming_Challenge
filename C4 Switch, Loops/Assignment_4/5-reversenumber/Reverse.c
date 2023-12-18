#include <stdio.h>

int main()
{  
	int i, num, Rev,j=1;
	
	for(i = 0; i < 10; i++)
	{
		num= num/10;
		Rev = (num%10);
		
	}
	printf("The Reversed num is:  %d", Rev);
	return 0;
}