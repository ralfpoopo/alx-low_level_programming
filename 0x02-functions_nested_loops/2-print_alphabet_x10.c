#include "main.h"

/**
*
* void print_alphabet_x10(void) - ptints the alphabets 10 times
*
* Return: Always 0 (success)
* */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; b <= 9; a++)
	{
		for (b = a; b <= a; b++)
		{
			_putchar(b);
		}
			_putchar('\n');
	}
}
