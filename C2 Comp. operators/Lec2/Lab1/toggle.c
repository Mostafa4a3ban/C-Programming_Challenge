#include <stdio.h>

int main(void)
{
int number , bit;
printf("Plase Enter a number:- \n");
scanf("%d", &number);
printf("Plase Enter a bit number to toggle:- \n");
scanf("%d", &bit);

number = number^(1<<bit);

printf("Number after manipulation is :- \n%d\n", number);

printf("Plase Enter a bit number to toddle:- \n");
scanf("%d", &bit);

number = number^(1<<bit);

printf("Number after manipulation is :- \n%d", number);

return 0;
}