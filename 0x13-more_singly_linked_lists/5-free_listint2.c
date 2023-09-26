#include "lists.h"

/**
 * free_listint2 - function that frees a list.
 * @head: beginning of a list.
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
}
