#include <stdio.h>

int main()
{
	int grade;
	
	printf("Plase Enter your grade:- \n");
	scanf("%d", &grade);
	
	if(grade >= 85 )
	{
		printf("Your rating is Excelent");
	}
	else if(grade < 85 && grade >= 75)
	{
		printf("Your rating is Very Good");
	}
	else if(grade < 75 && grade >= 65)
	{
		printf("Your rating is Good");
	}
	else if(grade < 65 && grade >= 50)
	{
		printf("Your rating is Normal");
	}
	else
	{
		printf("Your rating is Failed");
	}
	
	return 0;
}