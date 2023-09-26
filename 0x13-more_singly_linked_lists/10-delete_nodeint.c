#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index.
 * @head: argument.
 * @index: argument two.
 * Return: 1 if succeded and -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *list;
	listint_t *deleted_node;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	list = *head;

	if (index == 0)
	{
		*head = list->next;
		free(list);
		return (1);
	}

	while (list != NULL && i < index - 1)
	{
		list = list->next;
		++i;
	}

	if (list == NULL || list->next == NULL)
		return (-1);

	deleted_node = list->next;
	list->next = deleted_node->next;
	free(deleted_node);

	return (1);
}
