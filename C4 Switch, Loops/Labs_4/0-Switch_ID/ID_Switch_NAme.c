#include <stdio.h>

int main()
{
	int x;
	
	printf("Please Enter your ID:- \n");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1234:
			printf("Youssef");
			break;
		case 5678:
			printf("Mahmoud");
			break;
		case 1145:
			printf("Mina");
			break;
		default:
			printf("Wrong ID\n");
			break;
	}
		
	return 0;	
	}