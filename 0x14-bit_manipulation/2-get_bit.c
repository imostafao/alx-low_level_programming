#include "main.h"
#include <stdio.h>
int get_bit(unsigned long int x, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = x >> index;

	return (hold & 1);
}
