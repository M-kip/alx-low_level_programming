/*
 * Program to print the alphabet
 * using putchar function
 * Author: Moses Kiprono
 * Email: bettmoseskiprono@gmail.com
 */

#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description: prints the alphabet using
 * putchar function
 * Return: 0 if successful else 1
 */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
