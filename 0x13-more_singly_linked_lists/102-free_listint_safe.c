#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h, *temp = NULL;
size_t size = 0;

if (h == NULL)
return (0);

while (current)
{
size++;
temp = current;
current = current->next;

if (temp == current)
{
*h = NULL;
break;
}

free(temp);
}

*h = NULL;
return (size);
}
