#include "main.h"
/**
  *_print_rev_recursion - funtion prints a string recversed
  *@s: string to be printed in reverse
  *
  *Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
