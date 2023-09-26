#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the begining of a list.
 * @head: beginning of a list.
 * @n: argument.
 * Return: the address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_added_node;

	if (head == NULL)
		return (NULL);

	new_added_node = malloc(sizeof(listint_t));

	if (new_added_node == NULL)
		return (NULL);

	new_added_node->n = n;
	new_added_node->next = *head;

	*head = new_added_node;

	return (new_added_node);
}
