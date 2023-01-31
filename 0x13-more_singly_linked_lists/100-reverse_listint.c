#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the listint_t argument (head)
 * Return: a pointer to the first node of the reversed list;
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (!head || !(*head))
		return (NULL);

	prev = NULL;
	next = *head;

	while (next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
