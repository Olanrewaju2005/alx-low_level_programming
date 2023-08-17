#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  *main - entry point
  *@agrc: command line argument count
  *@agrv: command line argument vector
  *
  *Return: 0 on sucess
  */
int main(int __attribute__((__unused__)) agrc, char *agrv[])
{
	int num1, num2;
	char *op;

	if (agrc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(agrv[1]);
	op = agrv[2];
	num2 = atoi(agrv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
