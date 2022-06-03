#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
(*
 * Return: 0 on success
 */
int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
