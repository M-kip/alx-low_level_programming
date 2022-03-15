/*
 * Program print the alphabet
 * Author Moses Kiprono
 *
 */

#include "main.h"
/**
 * print_alphabet - Program prints alphabet
 *
 *
 * Return: on error -1 else Always 0
 */
int print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');

	return (0);
}
