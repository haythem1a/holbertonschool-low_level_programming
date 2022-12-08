#include <stdio.h>
/**
 * main - print alphabet in reverse 
 * Return: 0
 */
int main(void)

{
    char j = 'z';
    while (j >= 'a')
    {
        putchar(j);
        j--;
    }
    putchar('\n');
    return (0);
}
