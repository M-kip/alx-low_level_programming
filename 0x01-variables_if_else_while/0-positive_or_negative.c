#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * function - prints a random number
 *
 * Description: Uses random generator to print a
 * number to the screen
 * Return: return 0 if successful else 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);

	return (0);
}
