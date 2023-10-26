#include "main.h"
#include <stdio.h>
void print_binary(unsigned long int x)
{
	unsigned long int temp;
	int shifts;

	if (x == 0)
	{
		printf("0");
		return;
	}

	for (temp = x, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((x >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
