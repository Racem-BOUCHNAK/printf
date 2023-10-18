#include "main.h"
#include <unistd.h>  /* Include the necessary header */

/**
 * print_char - Helper function to print a single character
 * @c: Character to print
 *
 * Return: Number of characters printed
 */
int print_char(char c)
{
    write(1, &c, 1);
    return (1);
}

/**
 * print_str - Helper function to print a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int print_str(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
        count++;
    }
    return (count);
}

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
    const char *ptr;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++)
    {
        if (*ptr == '%')
        {
            ptr++; /* Move to the character after '%' */
            switch (*ptr)
            {
            case 'c':
                count += print_char((char)va_arg(args, int));
                break;
            case 's':
                count += print_str(va_arg(args, char *));
                break;
            case '%':
                count += print_char('%');
                break;
            default:
                /* Ignore unsupported format specifiers */
                break;
            }
        }
        else
        {
            count += print_char(*ptr);
        }
    }

    va_end(args);

    return (count);
}
