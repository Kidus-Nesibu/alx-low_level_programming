#include"main.h"
/**
 * rev_string - revers a given stirng
 * @s: the stirng given
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != 0)
	{
		i++;
	}

	char temp[i + 1];

	i = i - 1;
	while (i >= 0)
	{
		temp[j] = s[i];
		i--;
		j++;
	}
	temp[j] = '\0';
	while (i <= j)
	{
		s[i] = temp[i];
		i++;
	}
}
