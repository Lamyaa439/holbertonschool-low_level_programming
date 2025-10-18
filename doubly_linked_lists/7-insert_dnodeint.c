#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the pointer to
 * @idx: the position to inserts a new node
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *curr = *h;
	unsigned int i;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	while (curr != NULL && i < idx - 1)
	{
		curr =  curr->next;
		i++;
	}
	if (curr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = curr->next;
	new_node->prev = curr;
	if (curr->next != NULL)
		curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
