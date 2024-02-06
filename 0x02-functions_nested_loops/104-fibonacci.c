#include <stdio.h>



/**
 * main - print fibonacci 98
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long num1 = 1, num2 = 2, num3 = 0, num1b, num2b, num3b, num1a,
			num2a, mul = 1000000000, i = 0;

		while (i < 88)
		{

			if (i == 0)
			{
				printf("%lu, %lu, ", num1, num2);
			}
			num3 = num1 + num2;
			printf("%lu, ", num3);
			num1 = num2;
			num2 = num3;
			i++;
		}
			num1a = num1 / mul;
			num1b = (num1) % mul;
			num2a = num2 / mul;
			num2b = (num2) % mul;
			for (i = 88; i < 96; i++)
			{
				num3 = num1a + num2a;
				num3b = (num1b + num2b) % mul;

				if ((num1b + num2b) > ((num1b + num2b) % mul))
					++num3;
				printf("%lu%lu", num3, num3b);
				if (i == 95)
					break;
				printf(", ");
				num1a = num2a;
				num1b = num2b;
				num2a = num3;
				num2b = num3b;
			}

	printf("\n");
	return (0);
}
