#include"function_pointers.h"
/**
 * array_iterator - itrate through array in c
 * @array: array parrameter
 * @size: length of array
 * @action: function pointers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
