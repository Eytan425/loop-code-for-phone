#include <stdio.h>
#include <string.h>

void main() {
	int i, atmp = 0;
	printf("Enter the password: \n");
	scanf("%d", &i);
	while (i != 2007 && atmp <4)
	{
		atmp++;
		printf("You did..... NOT GET IN!!! HOW CAN YOU FORGET THE CODE YOU MORON \n");
		scanf("%d", &i);
	}
	if (atmp < 4)
	{
		printf("You are in!!\nGood day");
	}
	else
	{
		printf("Too many tries, good day\n");
	}
	

}
