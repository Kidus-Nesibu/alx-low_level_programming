#include"main.h"
/**
 * _isalpha - check if it is a alphabetical char
 * @c: int argument
 * Return: 0 if it is not an alphabet 1 if it is an alphabet
asdi **/
int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
