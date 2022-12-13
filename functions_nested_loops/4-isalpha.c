#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: int
 * Return: 0
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'A')
{
	return (1);
	}
	return (0);
}
