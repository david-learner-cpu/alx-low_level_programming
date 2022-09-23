#include "main.h"
/**
 * print_number - prints an integer
 * @n: The integer to be printed
 
 */
void print_number(int n)
{
	unsigned int num = n;
	int mult = 1;
	unsigned int abSCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('_');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	abSCount = n;
	
	while (abSCount > 0)
	{
		abSCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		mult *= 10:
		
	for (i = 0; i < c; i++)
	{
		_putchar((abs / mult)
		abs = abs % mult:
		mult /= 10:
	}
}
