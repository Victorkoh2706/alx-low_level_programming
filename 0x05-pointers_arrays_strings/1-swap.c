#include "main.h"

/**
 * change integer values
 * @a : points val 1, @b : points val 2
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
