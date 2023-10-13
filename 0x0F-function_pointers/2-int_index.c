#include"function_pointers.h"
/**
 * int_index - searchs for integer
 * @size: array length
 * @cmp: function pointer
 * @array: elements
 * Return: value based on the conditions
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL && cmp == NULL)
	{
		unsigned int i;

		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
}
