#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node.
 * @head: arguments
 * @idx: arguments.
 * @n: arguments.
 * Return: the address of a new code or null if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_added_node;
	listint_t *list;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_added_node = malloc(sizeof(listint_t));

	if (new_added_node == NULL)
		return (NULL);

	new_added_node->n = n;

	if (idx == 0)
	{
		new_added_node->next = *head;
		*head = new_added_node;
		return (new_added_node);
	}

	list = *head;

	while (list != NULL && i < idx - 1)
	{
		list = list->next;
		++i;
	}

	if (list == NULL)
	{
		free(new_added_node);
		return (NULL);
	}

	new_added_node->next = list->next;
	list->next = new_added_node;

	return (new_added_node);
}
