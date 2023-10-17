#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_string - Prints a string
 * @str: The string to print
 * Return: The length of the string
 */
int print_string(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
return (i);
}

/**
 * print_number - Prints an integer
 * @n: The integer
 * Return: The number of digits printed
 */
int print_number(int n)
{
int divisor = 1, len = 0;
int temp = n;

if (n < 0)
{
_putchar('-');
n = -n;
}

while (temp /= 10)
divisor *= 10;

while (divisor > 0)
{
_putchar('0' + (n / divisor % 10));
len++;
divisor /= 10;
}
return (len);
}
