#include <stdio.h>
/**
 * main - prints alphabat in lowercase except q and e followed by new line
 * Return: 0
 */
int main(void)

{
    char i;
    for (i = 'a'; i <= 'z'; i++)
    {
        if (i != 'q' && i != 'e')
            putchar(i);
    }
    putchar('\n');
    return (0);
}
