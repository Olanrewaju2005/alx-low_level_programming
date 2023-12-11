#include "main.h"
/**
  *_isupper - determine if a character is upper case
  *@c: character to be computed
  *Return: 1 if character id upper case and 0 if character is lower case
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
