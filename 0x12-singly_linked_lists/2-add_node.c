#include "lists.h"
/**
 * add_node - add node to the list
 * @head: last node
 * @str: str to add to new node
 *
 * Description: adds a new node to a list
 *
 * Return: new list or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = head;

	return (new_node);
}

