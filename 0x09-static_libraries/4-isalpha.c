#include "main.h"
/**
  *_isalpha - checks if a given entry is an alphabet
  *@c: entry to be checked
  *Return: 1 if the entry is an alphabet and 0 for other cases
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
