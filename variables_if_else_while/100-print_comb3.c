#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int h, c;
    for (h = '0'; a <= '9'; a++)
    {
        for (c = '0'; b <= '9'; c++)
        {
            if (a < b)
            {
                putchar(h);
                putchar(c);
                if (h != '8' || b != 'c')
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}