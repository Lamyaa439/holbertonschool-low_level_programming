#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: a pointer to o the list
 * Return: sum
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
