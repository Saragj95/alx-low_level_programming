#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = NULL;
	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < idx; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	newnode->next = current->next->next;
	current->next = newnode;
	return (newnode);
}

