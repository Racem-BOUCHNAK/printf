#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/* Function declarations */
int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *str);

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (format && *format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++; /* Move past '%' */

			switch (*format)
			{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;

			case 's':
				count += print_str(va_arg(args, char *));
				break;

			case '%':
				count += _putchar('%');
				break;

			default:
				count += _putchar('%'); /* Print the '%' character */
				count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}

/**
 * _putchar - Custom putchar function
 * @c: Character to be printed
 *
 * Return: 1 (success) or EOF (failure)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - Custom function to print a string
 * @str: String to be printed
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int print_str(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
