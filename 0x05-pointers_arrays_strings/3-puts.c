#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Description: prints a string
 * on success: return no error
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar(10)
}
