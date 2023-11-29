#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp1;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
	}
	else
	{
		while ((i <= (index - 1)) && (temp != NULL))
		{
			temp1 = temp;
			temp = temp1->next;
			i++;
		}
		temp1->next = temp->next;
	}
	free(temp);
	return (1);
}
