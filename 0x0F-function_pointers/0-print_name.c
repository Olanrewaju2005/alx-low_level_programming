#include "function_pointers.h"
/**
  *print_name - function prints a name
  *@name: name to be returned
  *@f: pointer to function
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}


