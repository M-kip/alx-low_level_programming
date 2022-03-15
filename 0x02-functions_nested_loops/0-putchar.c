/*
 * program to print _putchar
 * Author Moses kiprono
 */
#include "main.h"

/**
 * main - program to print putchar
 *
 * Return: on error return -1 else 0 (success)
 */

int main(void)
{
	char msg[] = "_putchar";
	int a;

	for (a = 0; a <= 7; a++)
	{
		_putchar(msg[a]);
		if (a == 7)
			_putchar('\n');
	}

	return (0);
}
