#include "main.h"
#include <unistd.h>  /* Include the necessary header */

/**
 * print_char - Helper function to print a single character
 * @ap: Argument list
 * @params: Format parameters
 *
 * Return: Number of characters printed
 */
int print_char(va_list ap, params_t *params)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
	params->count++;
	return (1);
}

/**
 * print_str - Helper function to print a string
 * @ap: Argument list
 * @params: Format parameters
 *
 * Return: Number of characters printed
 */
int print_str(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
		params->count++;
	}

	return (len);
}

/* Add other print functions as needed */
