#include "main.h"
/**
  * _isalpha - check if char is n APLH
  * @alph: - Variable that holds request
  * Return: 1 if on alphabet else 0.
  */
int _isalpha(int alph)
{
	if ((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z'))
		return (1);
	else
		return (0);
}
