#include "lists.h"
/**
 * list_len - print the lenght of a list
 * @h: singly list
 *
 * Return: lenght int
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
