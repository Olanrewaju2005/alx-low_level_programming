#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  *print_listint - function that prints all the elements of a listint_t list
  *@h: pointer to the first node of the list
  *
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t no_node = 0;

	if (h == NULL)
	{
		printf("List is empty");
		return (0);
	}

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		no_node++;
		ptr = ptr->next;
	}
	return (no_node);
}
