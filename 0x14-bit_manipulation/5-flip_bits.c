#include "main.h"
#include <stdio.h>
unsigned int flip_bits(unsigned long int x, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = x ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
