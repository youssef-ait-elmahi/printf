#include "main.h"
/**
 * _printf - prints formatted output
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mym;
	int ncp = 0;

	if (format == NULL)
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
