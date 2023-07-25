#include "main.h"
/**
  *swap_int - take in tow variable integers and swap them
  *@a: first integer
  *@b: second integer
  *Return: void
  */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

