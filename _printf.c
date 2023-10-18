#include "main.h"
<<<<<<< HEAD
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
=======
>>>>>>> 08d010b9701000cc18a6c554011fe3e87d36128c

/**
* _printf - prints anything
* @format: the format string
*
* Return: number of bytes printed
*/
int _printf(const char *format, ...)
{
<<<<<<< HEAD
    va_list args;
    int count = 0;
    const char *ptr;
=======
int sum = 0;
va_list ap;
char *p, *start;
params_t params = PARAMS_INIT;
>>>>>>> 08d010b9701000cc18a6c554011fe3e87d36128c

va_start(ap, format);

<<<<<<< HEAD
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
=======
if (!format || (format[0] == '%' && !format[1]))
return (-1);
>>>>>>> 08d010b9701000cc18a6c554011fe3e87d36128c

if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);

<<<<<<< HEAD
    return (count);
=======
for (p = (char *)format; *p; p++)
{
init_params(&params, ap);
if (*p != '%')
{
sum += _putchar(*p);
continue;
}
start = p;
p++;
while (get_flag(p, &params))
{
p++;
}
p = get_width(p, &params, ap);
p = get_precision(p, &params, ap);
if (get_modifier(p, &params))
p++;
if (!get_specifier(p))
sum += print_from_to(start, p, params.l_modifier ||
params.h_modifier ? p - 1 : 0);
else
sum = get_print_func(p, ap, &params);
}
_putchar(BUF_FLUSH);
va_end(ap);
return (sum);
>>>>>>> 08d010b9701000cc18a6c554011fe3e87d36128c
}
