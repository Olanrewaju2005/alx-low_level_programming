#include <stdio.h>
/**
  *main - entry point
  *description: prints the alphabets backwards
  *Return: always 09
  */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

