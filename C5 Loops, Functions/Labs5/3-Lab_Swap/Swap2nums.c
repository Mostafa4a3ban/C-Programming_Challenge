#include <stdio.h>
void swap(void);
int x, y;  /*global variable both main & swap can reaach*/
int main()
{
	printf("Enter Two numbers: \n");
	scanf("%d%d", &x,&y);
	printf("Unswaped X and Y: %d and %d\n", x,y);
	swap();
	printf("Swapped X and Y is : %d  and %d", x, y);	
	return 0;
}

void swap(void)
{
	int temporary = x;
	x = y;
	y = temporary;
}