#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Function that prints a random number
 * Author Moses kiprono
 * Date: 15 march 2022
 */

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
