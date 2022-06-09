#include "main.h"
/**
  * print_last_digit - print last digit
  * @n: - Variable that holds request
  * Return: return abs value
  */
int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l <  0)
		l = -l;
	p = '0' + l;
	_putchar(p);
	return (l);

}
