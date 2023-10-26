#include "main.h"

int set_bit(unsigned long int *x, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*x += p;

	return (1);
}
