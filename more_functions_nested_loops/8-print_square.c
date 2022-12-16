#include "main.h"
/**
 * print_square - print a square
 *@size : size of square
 * Return: Always 0.
 */
void print_square(int size)

{
	int h, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < size; h++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
