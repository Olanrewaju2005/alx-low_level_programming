#include "main.h"
/**
  *_strncpy - function copies a string
  *@dest: destination string
  *@src: source string
  *@n: input value
  *Return: destionation string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
