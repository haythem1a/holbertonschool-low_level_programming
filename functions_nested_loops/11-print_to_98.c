#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - to 98
 *@n :int
 * Return: 0
 */
void print_to_98(int n)

{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}
