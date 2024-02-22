#include"main.h"
/**
 * rev_string - revers a given stirng
 * @s: the stirng given
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;
	int len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	while (j < i / 2)
	{
		temp = s[j];
		s[j] = s[len];
		s[len--] = temp;
		j++;
	}
}
