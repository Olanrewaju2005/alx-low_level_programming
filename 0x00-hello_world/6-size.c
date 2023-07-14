#include <stdio.h>
/**
  *main - entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of long int: %lu bytes(s)", sizeof(long int));
	printf("Size of long long int: %lu bytes(s)", sizeof(long long int));
	return (0);
}
