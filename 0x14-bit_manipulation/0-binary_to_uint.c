#include "main.h"
#include <stdio.h>

{
	unsigned int n;

	if (b == NULL)
		return (0);
	for (n = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			n = n << 1;
		}
		else if (*b == '1')
		{
			n = n << 1;
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
