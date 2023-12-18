#include <stdio.h>

int main()
{
	int hours, salary;
	
	printf("Please Enter Your Working Hours:- \n");
	scanf("%d", &hours);
	
	if(hours >= 40)
	{
		salary = hours * 50;
	}
	else
	{
		salary = (hours * 50) - (hours * 500 /100);
	}
	printf("Your Salary is : %d", salary);
	return 0;
}