#include <stdio.h>
#include "main.h"
/**
  *print_diagsums - prints the sum of the two diagonals
  *of a square matrix
  *@a: a 2D array representing  square matrix of integers
  *@size: an integer representing the size of a square matrix
  *Return: void
  */
void print_diagsums(int *a, int size)
{
	int i, n, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[1];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}