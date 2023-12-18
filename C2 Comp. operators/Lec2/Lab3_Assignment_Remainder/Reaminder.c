#include <stdio.h>

int main(void)
{
	int number, Remainder;
	
	printf("Please Enter a number :- \n");
	scanf("%d", & number);
	
	printf("%d  %d  %d", ((number/100)%10),((number/10)%10),(number%10) );
	
	return 0;
}