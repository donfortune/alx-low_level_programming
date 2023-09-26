#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list.
 * @h: arguments.
 * Return: number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t elements_length = 0;

	while (h != NULL)
	{
		h = h->next;
		++elements_length;
	}

	return (elements_length);
}
