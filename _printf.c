#include "main.h"

/**
 * check - checks for format specifiers
 * @mym: argument list
 * @ncp: number of characters printed
 * @format: format string
 *
 * Return: number of characters printed
 */
int check(va_list mym, int ncp, const char *format)
{

	if (*format == 'c')
	{
		char c = va_arg(mym, int);

		_putchar(c);
		ncp++;
	}
	else if (*format == 's')
	{
		char *str = va_arg(mym, char *);

		if (str == NULL)
		{
			str = "(null)";
		}
			ncp += _print_string(str);
	}
	else if (*format == '%')
	{
		_putchar('%');
		ncp++;
	}
	else if (*format == 'd' || *format == 'i')
	{
		int num = va_arg(mym, int);

		ncp += _print_int(num);
	}
	else
	{
		_putchar('%');
		ncp++;
		_putchar(*format);
		ncp++;
	}
	return (ncp);
}

/**
 * _printf - prints formatted output
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mym;
	int ncp = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	else if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	else if (format == NULL)
		return (-1);
	va_start(mym, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			while (*format == ' ')
			{
				format++;
			}
		ncp = check(mym, ncp, format);
		}
		else
			{
			_putchar(*format);
			ncp++;
			}
		format++;
	va_end(mym);
	}
	return (ncp);
}
