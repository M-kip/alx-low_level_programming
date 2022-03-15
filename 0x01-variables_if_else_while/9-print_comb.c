/*
 * Program to print numbers
 * using putchar function
 * Author: Moses Kiprono
 * Email: bettmoseskiprono@gmail.com
 */

#include <stdio.h>

/**
 * main - print the numbers
 *
 * Description: prints the numbers using
 * putchar function
 * Return: 0 if successful else 1
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
