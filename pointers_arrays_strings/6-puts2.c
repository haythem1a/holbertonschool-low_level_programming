#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints a string
 * @str: char
 */
void puts2(char *str)
{
		int i, len;

		len = strlen(str);
	for (i = 0; i <= len; i += 2)
	_putchar(str[i]);
	_putchar('\n');
}
