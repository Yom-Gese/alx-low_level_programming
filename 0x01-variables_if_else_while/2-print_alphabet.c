#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char j = 'a';
	char k = 'A';

	while (j <= 'z')
	{
		putchar(j);
		j++;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);

}
