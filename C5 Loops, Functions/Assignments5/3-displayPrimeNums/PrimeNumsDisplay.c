#include <stdio.h>

void display_prime_nums(int A, int B);
int x = 1;


int main()
{
	int A, B;
	printf("Enter The Interval to work in it:\n");
	scanf("%d%d",&A,&B);
	
	display_prime_nums(A,B);
	
	return 0;
}


void display_prime_nums(int A, int B)
{
	int x = A;
	while ((x >= A) && (x <= B))
	{
		int count = 0;
		for(int i =2 ; i <= x/2; i++)
		{
			if((x)%i == 0)
			{
				count++;
			}
			else{}
		}
		
		if(count == 0)
			{
				printf("%d", x);
			}
			else{}
			x++;
	}
}