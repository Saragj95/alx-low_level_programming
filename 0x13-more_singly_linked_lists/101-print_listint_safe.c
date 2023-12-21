#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *f;
	size_t i = 0;

	current = head;
	f = head;
	while (current != NULL)
	{
		printf("[%p] %d",(void*)current,current->n);
		printf("\n");
		i++;
		f = head;
		while (f != current)
		{
			if (f == current->next)
			{	
				printf("-> [%p] %d\n", (void *)f, f->n);
				exit(98);
			}
			f = f->next;
		}
		current = current->next;
	}
	return (i);
}
