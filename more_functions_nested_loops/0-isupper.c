#include "main.h"
/**
 * _isupper - 
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
