#include"variadic_functions.h"
/**
 * print_numbers - display number
 * @separator: comma
 * @n: number ofargs
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list args;
		unsigned int i;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < n - 1 && separgtor != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
}

