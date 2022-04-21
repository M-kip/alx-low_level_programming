#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the contents of a linked list
 * @h: struct data type
 *
 * Description: program that prints all the
 * contents of a singly linked list
 *
 * Return: int number of nodes
 */
size_t print_list(const list_t *h)
{
	const struct list_s *p = h;
	size_t n;

	for (n = 0; p != NULL; p = p->next, n++)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
			continue;
		}
		printf("[%d] %s\n", p->len, p->str);
	}

	return (n);
}

