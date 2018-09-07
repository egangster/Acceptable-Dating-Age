#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char inputChar[4];

	printf("hello please enter your age: ");
	gets_s(inputChar, 3); // Compilable on VS2017 for Windows, but won't be on POSIX systems, use gets() instead.

	int age = atoi(inputChar);
	int lowestAcceptableAge = age / 2 + 7;
	int maxAcceptableAge = (age - 7) * 2;

	printf("the socially acceptable age range you can date in is: %i to %i", lowestAcceptableAge, maxAcceptableAge);
}
