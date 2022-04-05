#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: Integer
 * @c: Character to initialize with
 *
 * Return: pointer to an array or NULL if failure
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));

	unsigned int x;
	for ( x= 0; x < size; x++)
	{
		ptr[x] = c;
	}
	
	return ptr;
}

