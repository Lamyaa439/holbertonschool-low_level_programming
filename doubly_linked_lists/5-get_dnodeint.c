#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer
 * @index: the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	temp = head;

	if (temp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
