#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			if (*format)
			{
				count += process_format_specifier(&format, args);
				continue;
			}
		}
		count += custom_putchar(*format++);
	}

	va_end(args);
	return (count);
}

/**
 * process_format_specifier - Process format specifier
 * @format: Pointer to the format string
 * @args: Variable arguments list
 *
 * Return: Number of characters printed (excluding null byte)
 */
int process_format_specifier(const char **format, va_list args)
{
	int count = 0;

	if (**format == 's')
		count += print_str(va_arg(args, char *));
	else if (**format == '%')
		count += custom_putchar('%');
	else if (**format)
		count += custom_putchar(**format);

	(*format)++;

	return (count);
}

/**
 * custom_putchar - Custom putchar function
 * @c: Character to print
 *
 * Return: 1 (Success)
 */
int custom_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - Print string function
 * @str: String to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int print_str(char *str)
{
	int count = 0;

	if (str)
	{
		while (*str)
		{
			count += custom_putchar(*str);
			str++;
		}
	}

	return (count);
}
