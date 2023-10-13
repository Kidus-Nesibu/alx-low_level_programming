#include"variadic_functions.h"
/**
 * sum_them_all - add the arguments
 * @n: number of arguments
 * Return: sum of arguments or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i;
		va_list args;
		unsigned int sum = 0;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{

			sum += va_arg(args, int);
		}
		return (sum);
	}
}
