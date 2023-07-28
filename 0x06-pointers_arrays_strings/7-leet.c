#include "main.h"
/**
  *leet - function changes vowels to numbers
  *@s: analized string
  *
  *Return: string with all vowels changed
  */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307l43071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
