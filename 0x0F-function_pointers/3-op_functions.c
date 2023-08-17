#include "3-calc.h"

/**
  *op_add - function adds two numbers
  *@a: first number
  *@b: second number
  *
  *Return: result of additon
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - function finds the difference between two numbers
  *@a: first number
  *@b: second number
  *
  *Return: result of subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - function multiplies two numbers
  *@a: first number
  *@b: secomd number
  *
  *Return: product of multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - funtion divides two numbers
  *@a: first number
  *@b: second number
  *
  *Return: result of the division
  */
int op_div(int a, int b)
{
	return (a /  b);
}

/**
  *op_mod - functin to find the modulus
  *of two numbers
  *@a: first number
  *@b: second number
  *
  *Return: modulus of the two numbers
  */
int op_mod(int a, int b)
{
	return (a % b);
}
