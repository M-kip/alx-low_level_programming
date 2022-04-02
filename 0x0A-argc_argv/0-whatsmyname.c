#include <stdio.h>

/*
 * Program to print it's name
 * Author: Moses kiprono
 */

/**
 * main - Print program name
 * @argc: argument counter
 * @argv: argument vector
 *
 * Description: program that prints its name
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
