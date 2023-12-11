#include "main.h"
/**
  *_memcpy - copies byte from memory area src to memory area dest
  *@dest: a pointer representing destination memory
  *@src: a pointer representing source memory
  *@n:  variable representing the number of bytes to be copied
  *Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
