/**
 * _print_rev_recursion - prints string reverse
 * @s: string parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
	else
	{
		_putchar(10);
	}
}
