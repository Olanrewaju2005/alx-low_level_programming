#include "main.h"
/**
  *_strlen - this function returns the length of a string
  *@s: string to be computed
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
