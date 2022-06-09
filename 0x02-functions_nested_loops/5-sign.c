#include "main.h"
/**
  * print_sign - check if int is neg or not
  * @n: - Variable that holds request
  * Return: 1 if GT 0,0 if 0,-1 if less than 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
