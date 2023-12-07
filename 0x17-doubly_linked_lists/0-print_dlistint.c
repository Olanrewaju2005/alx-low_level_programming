#include "lists.h"
/** print_dlistint - prints all the element  of
  * a doubly linked list
  * @h: ointer to the first element in the list
  *
  * Return: number of  nodes printed
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
