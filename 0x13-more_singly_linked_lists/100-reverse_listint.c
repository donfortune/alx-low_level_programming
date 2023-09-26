#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *list = NULL;
	listint_t *current = NULL;


	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = list;
		list = *head;
		*head = current;
	}

	*head = list;
	return (*head);
}
