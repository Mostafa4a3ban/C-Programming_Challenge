#include <stdio.h>

int main()
{
	char character;
	printf("Please Enter a character");
	scanf(" %c", &character);
	
	if((character >= 65 && character <= 90) || (character >= 97 && character <= 122) )
	{
				printf("The character is an alphabet");
	}
	else
	{
		printf("The character is not an alphabet");
	}
	
	return 0;
}