#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  *add_nodeint - function adds a new node at the beginning of the list
  *@n: data to be filled in list
  *@head: pointer to pointer to first node
  *
  *Return: address to new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg = malloc(sizeof(listint_t));

	beg->n = n;
	beg->next = NULL;

	if (beg == NULL)
		return (NULL);

	beg->next = *head;
	*head = beg;

	return (beg);
}
