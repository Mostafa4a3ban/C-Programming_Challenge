#include <stdio.h>

int main(void)
{
	int number, bit, bit_value;
	printf("Please Enter a Number:- \n");
	scanf("%d", &number);
	printf("Please Enter a bit_Number:- \n");
	scanf("%d", &bit);
	
	bit_value = (number>> bit)&(1);
	printf("The bit value is :- \n%d", bit_value);
	
	return 0;
}