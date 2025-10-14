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

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 1)/*handle insertion at pos 1*/
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	/*step 3: Traverse the list to find the node before*/
	for (i = 0; i < idx - 2 && curr != NULL; i++)
	{
		if (curr == NULL)
		{
			free(new_node);
			return (*h);
		}
		curr = curr->next;
	}
	new_node->prev = curr;
	new_node->next = curr->next;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
