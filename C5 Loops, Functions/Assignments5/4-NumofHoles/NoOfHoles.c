#include <stdio.h>
int Num_Of_Holes(int Num);
int main()
{
	int Num, Holes = 0;
	printf("Please Enter a number: \n");
	scanf("%d", &Num);
	
	Holes = Num_Of_Holes(Num);
	printf("No. of Holes is:  %d", Holes);
	
	return 0;
}

int Num_Of_Holes(int Num)
{
	int Holes = 0, value = 0;
	for(int i = 0; i <10; i++)
	{
		value = Num%10;
	switch(value)
	{
		case 1:break;
		case 2:break;
		case 3:break;
		case 4:Holes++;break;
		case 5:break;
		case 6:Holes++;break;
		case 7:break;
		case 8:Holes = Holes + 2;break;
		case 9:Holes++;break;
		default:break;
	}
	Num/=10;
	}
	return Holes;
}