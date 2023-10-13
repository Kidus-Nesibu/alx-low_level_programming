#include"variadic_functions.h"
/**
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
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}

