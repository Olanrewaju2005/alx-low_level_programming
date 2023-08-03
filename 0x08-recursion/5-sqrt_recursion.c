#include "main.h"
/**
  *recursive_helper - function is a recursive helper
  *of the main function
  *@n: integer whose square root is to  be found
  *@start: initial assumed square root
  *Return: square root of n
  *and -1 if it has no natural square root
  */
int recursive_helper(int n, int start)
{
	if (n < 0)
		return (-1);

	if (start == 0)
		return (-1);

	if (start * start == n)
		return (start);

	return (recursive_helper(n, start + 1));
}

/**
  *_sqrt_recursion - funtion computes the square root
  *@n: the number whose square root is computed
  *Return: square root of n
  */

int _sqrt_recursion(int n)
{
	return (recursive_helper(n, n));
}
