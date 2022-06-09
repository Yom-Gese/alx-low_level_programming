#include "main.h"
/**
  * _abs - computer absolute value
  * @n: - Variable that holds request
  * Return: return abs value
  */
int _abs(int n)
{
int s;
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		s = -(n);
		return (s);
	}
	else
	{
		return (0);
	}

}
