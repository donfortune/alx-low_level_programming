#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a list.
 * @head: beginning of a list.
 * @n: argument.
 * Return: address of the new element or null if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end;
	listint_t *current_node;

	while (head == NULL)
		return (NULL);

	new_node_end = malloc(sizeof(listint_t));
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
	}
	else
	{
		current_node = *head;

		while (current_node->next != NULL)
			current_node = current_node->next;

		current_node->next = new_node_end;
	}

	return (new_node_end);
}
