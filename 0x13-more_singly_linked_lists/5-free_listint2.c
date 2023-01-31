#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: header pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (head)
	{
		while (*head)
		{
			node = *head;
			*head = (*head)->next;
			free(node);
		}
		*head = NULL;
	}
}
