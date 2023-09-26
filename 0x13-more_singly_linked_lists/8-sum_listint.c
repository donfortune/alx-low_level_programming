#include "lists.h"
/**
 * sum_listint - funtion to add all data in a list.
 * @head: begining of a list.
 * Return: the sum of all the data.
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *list = head;

	while (list != NULL)
	{
		result += list->n;
		list = list->next;
	}

	return (result);
}
