#include "search_algos.h"

/**
  * linear_search - searches for a value in an array
  * of integers using linear search.
  * @array: a pointer to the first element in the array
  * @size: the number of elements in the array
  * @value: the value to search for
  *
  * Return: if the value is not present or the array is NULL, -1
  * otherwise, the first index where the value is located is returned
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] - [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
