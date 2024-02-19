#include"main.h"
/**
 * swap_int -  swaps the value of a and b
 * @a: point to the value of a
 * @b: poitn to the value of b
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
