#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */
void _putchar(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar ('\n');
}
