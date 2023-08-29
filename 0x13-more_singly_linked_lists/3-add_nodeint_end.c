#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_nodeint_end - function that adds a new node
  *at the end of a listint_t list
  *@n: data to be filled in node
  *@head: pointer to pointer to first node of list
  *Return: address of new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *ptr;

	end->n = n;
	end->next = NULL;

	if (end == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	ptr = *head;

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = end;
	return (end);
}
