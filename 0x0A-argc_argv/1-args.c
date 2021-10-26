#include <stdio.h>
/**
 * main- prints the number of it's arguments
 * @argc : no of argument
 * @argv : no of arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
