#include <stdio.h>
#include "main.h"
/**
  *_strchr - function locates a character in a string
  *@s: a pointer to thr input string where thw character will be located
  *@c: character to be located in the string
  *Return: always 0 on success
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
