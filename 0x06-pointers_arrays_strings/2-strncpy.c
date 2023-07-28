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

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j] != '\0';
		j++;
	}
	while (j < n)
	{
		j++;
	}
	return (dest);
}
