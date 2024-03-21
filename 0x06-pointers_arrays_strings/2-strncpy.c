#include"main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}

	return (dest);
}
