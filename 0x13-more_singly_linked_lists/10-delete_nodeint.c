#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

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
		while (i <= (index - 1))
		{
			if (temp == NULL)
			{
				return (-1);
			}
			else
			{
				temp1 = temp;
				temp = temp1->next;
				i++;
			}
		}
		temp1->next = temp->next;
	}
	free(temp);
	return (1);
}
