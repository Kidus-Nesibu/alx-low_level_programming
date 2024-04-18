#include "main.h"
#include <stdio.h>
/**
 * _atoi - returns integer
 *@s: the string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int i = 0, sum = 0, num;
	int indicator = 1;
	int negative = 0;

	while (s[i] != '\0')
	{
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
		{
			num = s[i] - '0';
			sum = num + sum;
			if (!(s[i + 1] - '0' >= 0 && s[i + 1] - '0' <= 9))
				break;
			sum = sum * 10;
		}
		if (s[i] == '-')
			negative++;
		i++;
	}
	if (negative % 2 == 0)
		indicator = indicator;
	else
		indicator = -1 * indicator;
	return (sum * indicator);
}
