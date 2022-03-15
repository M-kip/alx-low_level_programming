#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * function - prints a random number
 * 
 * Description: uses random generator to print a
 * number to the screen
 * Return: return 0 if successful else 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
	{
		printf("is positive\n");
	}
	else if ( n < 0)
	{
		printf("is negative\n");
	}
	else
		printf("is zero\n");

	return (0);
}
