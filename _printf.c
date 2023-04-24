#include "main.h"
/**
 * _printf - prints formatted output
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mym; /* used to access each arg passed to the ft after format str */
	int ncp = 0; /* ncp is the number of characters printed */

	if (format == NULL)
		return (-1);
	va_start(mym, format);
	while (*format != '\0') /* loop until end of format string is reached */
	{
		if (*format == '%') /* found a format specifier */
		{
			format++; /* move past the '%' character */
			if (*format == 'c') /* char format specifier */
			{
				char c = va_arg(mym, int); /* get next arg as int and cast it to char */

				_putchar(c);
				ncp++;
			}
			else if (*format == 's') /* string format specifier */
			{
				//char *str = va_arg(mym, char *);

				ncp += _print_string(mym);
			}
			else if (*format == '%') /* escaped '%' character */
			{
				_putchar('%');
				ncp++;
			}
		}
		else /* regular character */
		{
			_putchar(*format);
			ncp++;
		}
		format++; /* move on to the next character in the format string */
	}
	va_end(mym);

	return (ncp);
}
