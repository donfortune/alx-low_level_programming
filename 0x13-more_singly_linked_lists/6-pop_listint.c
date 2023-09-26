#include "lists.h"

/**
 * pop_listint - function that deletes the head of a node in a linked list.
 * @head: begining of a linked list.
 * Return: return 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int deleted_node;
	listint_t *list;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	list = *head;
	deleted_node = list->n;
	*head = list->next;
	free(list);

	return (deleted_node);
}
