#include "main.h"
#include <string.h>
/**
  *_strcat - funtion concatenates two strings
  *@dest: destinaation string
  *@src: source string
  *Return: pointer to s1
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);

}
