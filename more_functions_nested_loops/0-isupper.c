#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: int
 * Return: 0
 */
int _isupper(int c)

{

	char i;

	for (i = 'A'; i <= 'Z' ; i++)
{
	if (i == c)
	return (1);
}
	return (0);
}
