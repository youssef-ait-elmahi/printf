#include "main.h"

/**
 * _print_string - Prints a string from a variable argument list
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
	len = _strlenc(s);
	write(1, s, len);
	return (len);
}
