#include <unistd.h>
/**
 * _putchar -writes the character c to stdout
* @c:The character to print 
*
 * Return: On success 1.
 * on error, -1 is returned, and errno is appropriately .
 */
int _putchar(char C)
{
	return (write(1, &C, 1));
}
