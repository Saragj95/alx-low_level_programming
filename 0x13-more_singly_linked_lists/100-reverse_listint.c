#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;

	return *head;
}
