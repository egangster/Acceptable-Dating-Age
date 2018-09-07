#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char cChar[4];

	printf("hello please enter your age: ");
	gets_s(cChar, 3);

	int age = atoi(cChar);
	int lowestAcceptableAge = age / 2 + 7;
	int maxAcceptableAge = (age - 7) * 2;

	printf("the socially acceptable age range you can date in is: %i to %i", lowestAcceptableAge, maxAcceptableAge );
}
