#include"main.h"
/**
 * print_name - prints name
 * @name: name string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

