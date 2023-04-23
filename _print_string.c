#include "main.h"

/**
 * _printf_string - print a string.
 *
 * @val: argument.
 * Return: the length of the string.
 */

int _print_string(va_list val)
{
	char *s;
	int len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = strlen(s);
	write(1, s, len);
	return (len);
}
