#include "main.h"
/**
  *_islower - check if a particular input is in lowercase
  *@c: the character to be checked
  *Return: 1 for lowercase characters and 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

