#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: prints a string to the standard error
 *
 * Return: 1
 */

int main(void)
{
char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, err, 59);
return (1);
}
