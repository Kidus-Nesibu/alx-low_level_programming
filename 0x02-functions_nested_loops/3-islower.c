#include"main.h"
/**
 * _islower - checks if the ascii value is lower case or else
 * @c: ascii value of that is going to be checked
 * Return: 0 if it is uppercase 1 if it is lowercase
 **/
int _islower(int c)
{
	if (c <= 'a' || c >= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
