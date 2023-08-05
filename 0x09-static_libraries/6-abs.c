#include "main.h"
/**
  *_abs - returns absolute value of an entry
  *@c: number to be computed
  *Return: absolute value of number or 0
  */
int _abs(int c)
{
if (c < 0)
{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
}
return (c);
}
