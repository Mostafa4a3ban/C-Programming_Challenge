#include <stdio.h>

int Set_Bit(int x, int y);
int Clear_Bit(int x, int y);
int Toggle_Bit(int x, int y);
int Get_Bit(int x, int y);

int main()
{
	int x, Bit_num, Result = 0;
	char y;
	printf("Please Enter a value and a Bit: \n");
	scanf("%d%d", &x, &Bit_num);
	printf("Enter The Operation:- S/C/T/G \n");
	scanf(" %c", &y);
	switch(y)
	{
		case 'S':Result= Set_Bit(x, Bit_num); break;
		case 'C':Result= Clear_Bit(x, Bit_num); break;
		case 'T':Result= Toggle_Bit(x, Bit_num);break;
		case 'G':Result= Get_Bit(x, Bit_num);break;
		default: break;
	}
	printf("The Result is :  %d", Result);
	return 0;
}

int Set_Bit(int x, int y)
{
	int Result = ((x)|(1<<y));
	return Result;
}
int Clear_Bit(int x, int y)
{
	int Result = ((x)&~(1<<y));
	return Result;
}

int Get_Bit(int x, int y)
{
	int Result = (((x)&((1<<y)))>>y);
	return Result;
}

int Toggle_Bit(int x, int y)
{
	int Result = ((x)^(1<<y));
	return Result;
}