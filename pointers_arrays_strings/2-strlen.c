#include "main.h"
/**
 * _strlen - retrun the lenght
 * @s: char
 * Return: 0
 */
int_strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;
	return (i);
}
