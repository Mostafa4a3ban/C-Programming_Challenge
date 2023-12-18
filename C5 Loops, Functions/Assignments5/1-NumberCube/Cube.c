#include <stdio.h>
int Cube(int num);

int main()
{
	int num, Cubed;
	printf("Enter a number: \n");
	scanf("%d", &num);
	Cubed = Cube(num);
	printf("Cube number is : %d", Cubed);
	
	return 0;
}

int Cube(int num)
{
	return (num * num * num);
}