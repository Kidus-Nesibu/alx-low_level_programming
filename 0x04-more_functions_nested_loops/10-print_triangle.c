#include "main.h"

/**
 * print_diagonal - prints a line in diagons
 * @n: the number of itme sit should be printed
 *
 */
void print_triangle(int size)
{
        int i = 1, j;

        if (size <= 0)
                _putchar('\n');

        while (i <= size)
        {
                j = 1;

                while (j <= size)
                {
                        if (i == j)
                                _putchar('#');
                        else if (i > j)
                                _putchar(' ');
                        j++;
                }
                _putchar('\n');
                i++;
        }

}

