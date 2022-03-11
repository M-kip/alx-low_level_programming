#include <stdio.h>

/*
 * Program to print the sizes of c data types
 * It uses the sizeof function
 */

/**
 * main - Print data types size in bytes
 *
 * Description: print data types sizes using the sizeof function
 * Return: 0 if the program executed successfully else 1
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
