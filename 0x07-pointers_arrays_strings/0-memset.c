#include "main.h"
/**
  *_memset - function fills memory with a constant byte
  *@s: pointer to the start of the memory block
  *@b: value that will be used to fill the memory
  *@n: total number of bytes to fill with the constant byte
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

