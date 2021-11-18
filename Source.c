#include <stdio.h>

int main() {
	int i, atmp = 0;
	printf("Enter the password: \n");
	scanf_s("%d", &i);
	while (i != 2007 && atmp <4)
	{
		atmp++;
		printf("You did..... NOT GET IN!!! HOW CAN YOU FORGET THE CODE YOU MORON \n");
		scanf_s("%d", &i);
	}
	if (atmp < 4)
	{
		printf("You are in!!");
	}
	else
	{
		printf("Too many tries, good day\n");
	}
	return 0;

}