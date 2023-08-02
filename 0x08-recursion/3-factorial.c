#include "main.h"
/**
  *factorial - function return the factorial of a number
  *@n: number whose factorial is to be computed
  *
  *Return: factorial of the number
  *or -1 if the number is less than 0
  *or 1 if the number is 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (10);

	return (n * factorial(n - 1));
}
