#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number_nodes = 0;
	const listint_t *list = head;
	const listint_t *current = head;

	if (head == NULL)
		exit(98);

	while (list && current && current->next)
	{
		printf("[%p] %d\n", (void *)list, list->n);
		list = list->next;
		current = current->next->next;
		++number_nodes;

		if (list == current)
		{
			printf("-> [%p] %d\n", (void *)list, list->n);
			break;
		}
	}

	return (number_nodes);
}
