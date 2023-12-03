#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t i = 0;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d",(void*)current->next,current->n);
		printf("\n");
		i++;
		current = current->next;
	}
	return (i);
}
