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
	int b;

	for (a = 97; a <= 122; a++)
		putchar(a);
	for (b = 65; b <= 90; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
