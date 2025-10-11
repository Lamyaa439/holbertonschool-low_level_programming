#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *element = h;

	while (element != NULL)
	{
		printf("%d\n", element->n);
		element = element->next;
		count += 1;
	}
	return (count);
}
