#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int i = 0;

	ptr = malloc(sizeof(listint_t));
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
