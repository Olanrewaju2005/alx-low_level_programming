#include "main.h"
/**
  *is_prime_number - check if a number is prime
  *@n: number to be checked
  *
  *Return: 1 if numbeer is prime
  *or 0 for every other case
  */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
