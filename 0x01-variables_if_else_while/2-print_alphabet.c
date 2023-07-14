#include <stdio.h>
/**
  *main - entry point
  *description: this program will print all the alphabets in lowercase
  *Return: is always 0 (success)
  */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
