#include <stdio.h>
/**
  *main - entry point
  *description: prints numbers in base 10
  *Return: always 0
  */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
