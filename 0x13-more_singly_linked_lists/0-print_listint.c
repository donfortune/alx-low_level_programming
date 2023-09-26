#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list.
 * @h: arguments.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++number_nodes;
	}

	return (number_nodes);
}
