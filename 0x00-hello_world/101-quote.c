#include <stdio.h>
#include <unistd.h>
#include <string.h>
/*
 * Program to print output to screen
 */

/**
 * main - program to print output to main
 *
 * Description: program prints to stderr using write command
 * Return: return 1 if successfull
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, strlen(msg));

	return (1);
}
