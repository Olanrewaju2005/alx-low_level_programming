#include "main.h"
#include <string.h>
/**
  *is_palindrome - checks if a string is palindrome
  *@s: string to be checked
  *
  *Return: 1 if it is palindrome
  *or 0 if it is not
  */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}

	if (len == 0)
		return (1);

	return (1);
}
