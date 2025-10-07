#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node -  adds a new node at the beginning of a list_t list.
 * @head: ...
 * @str: ...
 *
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	new_node->str = str;
	new_node->next = (*head);

	(*head) = new_node;

	return (&new_node);
}
