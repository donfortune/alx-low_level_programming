#include "lists.h"

/**
 * free_listint - funtion that frees a list.
 * @head: begining of list.
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
