#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth nod of a linked list.
 * @head: beigining of the list.
 * @index: argument.
 * Return: the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int count = 0;

	while (list != NULL)
	{
		if (count == index)
			return (list);
		++count;
		list = list->next;
	}

	return (NULL);
}
