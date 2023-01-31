#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of linked list
 * @idx: index to be inserted at
 * @n: integer data for inserted node
 * Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode, *prev;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	node = *head;
	prev = *head;
	i = 0;
	if (idx == 0)
	{
		newnode->next = node;
		*head = newnode;
		return (newnode);
	}
	while (node != NULL)
	{
		if (i == idx)
		{
			newnode->next = node;
			prev->next = newnode;
			return (newnode);
		}
		prev = node;
		node = node->next;
		i++;
	}
	if (idx == i)
	{
		prev->next = newnode;
		return (newnode);
	}

	free(newnode);
	return (NULL);
}
