/*
 * Program to print single digits of base 16
 * Author: Moses kiprono
 */

#include <stdio.h>

/**
 * main - print all the single digits of base 16
 * 
 * Description: prints all the single digits
 * 16
 * Return: 0 is successful
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
		putchar(a);
	for (b = 97; b <= 102; b++)
		putchar(b);
	printf("\n");

	return (0);
}
