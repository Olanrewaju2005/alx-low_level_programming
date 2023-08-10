#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - function alllocates memory using malloc
  *@b: number of bytes of tpo be allocated
  *Return: pointer to the space allocated
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
