#include <unistd.h>

/**
 * main - Header
 * _putchar - writes the charachter c to stdout
 * @c: The charachter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, errrno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
