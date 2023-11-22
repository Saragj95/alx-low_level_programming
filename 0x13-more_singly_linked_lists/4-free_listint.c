#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	else if(head->next == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		while (head)
		{
			ptr = head->next;
			free(head);
			head = ptr;
		}
	}
}
