#include "main.h"

/**
 * print_rev - prints a string, s, in reverse with newline
 * @str: string to be printed
 *
 * Return: void
 */

void print_rev(char *str)
{
	int count = 0, count2;

	while (*(str + count) != '\0')
	{
		count++;
	}
	count2 = count;
	while (count >= 0)
	{
		if (*(str + count) != '"' && count2 != count)
			_putchar(*(str + count));
		count--;
	}
	_putchar('\n');
}

