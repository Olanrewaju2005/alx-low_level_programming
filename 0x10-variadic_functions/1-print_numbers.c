#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  *print_numbers - funtion prints numbers followed by a new line
  *@separator: stirng to be printed between numbers
  *@n: numbers of ints passed to function
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;

	va_start(mylist, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(mylist, int), separator);
	}
	for (i = n - 1; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));
	}
	va_end(mylist);
	printf("\n");
}


