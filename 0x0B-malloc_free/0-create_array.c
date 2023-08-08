#include "main.h"
#include "stdlib.h"

/**
  *create_array - function creates an array of chars
  *and initializes it with a specific char
  *@size: size of the array
  *@c: char to be initialized with
  *Return: pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *ptarray;
	unsigned int count;

	ptarray = malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
	{
		if (size == 0)
			return (NULL);
		ptarray[count] = c;
	}

	return (ptarray);
}
