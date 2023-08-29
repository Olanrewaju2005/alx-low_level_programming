#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  *listint_len - function that returns the number of
  *elements in a linked listint_t list
  *@h: pointer to the first node of the list
  *
  *Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t no_nodes = 0;

	if (h == NULL)
		return (-1);

	ptr = h;
	while (ptr != NULL)
	{
		no_nodes++;
		ptr = ptr->next;
	}

	return (no_nodes);
}
