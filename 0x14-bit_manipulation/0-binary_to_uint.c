#include "main.h"
#include <stdio.h>
unsigned int binary_to_uint(const char *a)
{
	unsigned int total, power;
	int len;

	if (a == NULL)
		return (0);

	for (len = 0; a[len]; len++)
	{
		if (a[len] != '0' && a[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (a[len] == '1')
			total += power;
	}

	return (total);
}
