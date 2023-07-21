#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; 1 <= 10; 1++)
	{
		for (j = '0'; <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
	}
}
