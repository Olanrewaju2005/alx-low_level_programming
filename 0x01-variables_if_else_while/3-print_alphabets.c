#include <stdio.h>
/**
  *main - Entry point
  *description: this program will print alphabets in both lower and upper case
  *Return: is always 0
  */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
