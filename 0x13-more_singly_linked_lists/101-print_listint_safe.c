#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *firstnode;
	size_t i = 0;

	current = head;
	firstnode = current->next;
	while (current != NULL)
	{
		if (current->next != NULL)
		{
			printf("[%p] %d",(void*)current->next,current->n);
			printf("\n");
		}
		else
		{
			printf("[NULL] %d", current->n);
		}
		i++;
		current = current->next;
		if (current->next == firstnode)
		{
			return (98);
		}
	}
	return (i);
}
