#include <stdio.h>

int main()
{
	char character;
	printf("Please Enter a character");
	scanf(" %c", &character);
	if((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
	{
	if((character >= 97 && character <= 122) )
	{
				character -= 32;
				printf("The UPPERCASE is :  %c", character);
	}
	else
	{
		//Do nothing
	}
	
	}
	else
	{
		printf("The character is not an alphabet");
	}
	
	return 0;
}