#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to print
 * @params: Format parameters
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c, params_t *params)
{
	write(1, &c, 1);
	params->count++;
	return (1);
}
