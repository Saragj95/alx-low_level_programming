#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		i = i + current->n;
		current = current->next;
	}
	return (i);
}
