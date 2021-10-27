#include <stdio.h>
/**
 * main- prints it's own name
 * @argc : numbers of arguments
 * @argv : arrays of arguments
 * Return: always 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
