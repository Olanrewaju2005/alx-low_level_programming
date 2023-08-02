#include "main.h"
/**
  *_pow_recursion - function calulates power of a number
  *@x: base
  *@y: exponent
  *
  *Return: power of the number
  *or -1 if y is less than 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
