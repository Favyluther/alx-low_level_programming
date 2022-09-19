#include "main.h"
/**
 * swap_int()- swaps 2 int
 * @a: first parameter for thr func
 * @b: second parameter for thr func
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int n;
	n  = *a;
	*a = *b;
	*b = n;
}
