#include "lists.h"

int pop_listint(listint_t **head)
{
	int i;

	if (*head == NULL)
	{
		return(0);
	}
	i = head->n;
	free(head);
	return(i);
}
