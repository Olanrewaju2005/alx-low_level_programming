#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - function add all its parameters
  *@n: number of parameters
  *@...: variadic arguments
  *Return: resukt of summation
  */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result = (result + va_arg(list, int));
	}
	va_end(list);

	return (result);
}
