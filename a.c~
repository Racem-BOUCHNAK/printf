#include "main.h"

/**
 * _printf - Custom printf function to handle %c, %s, and %%
 * @format: The format string
 * @...: Variable number of arguments
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);

while (*format)
{
if (*format != '%')
{
_putchar(*format);
count++;
}
else
{
format++;
switch (*format)
{
case 'c':
count += printf_character(args);
break;
case 's':
count += printf_str(args);
break;
case '%':
count += print_37();
break;
case 'd':
case 'i':
count += printf_integer(args);
break;
case 'b':
count += print_binary(args);
break;
}
}
format++;
}

va_end(args);
return (count);
}
/**
*printf_character - function that prints a character
*@args: argument
*Return: 0
*/
int printf_character(va_list args)
{
char c = va_arg(args, int);

 if (c == '\0')
return (0);
_putchar(c);
return (1);
}

/**
*printf_str - function thet prints a string
*@args: arguments
*Return: length of the printed string
*/
int printf_str(va_list args)
{
char *s;
int j, len;
s = va_arg(args, char*);

if (s == NULL)
{
s = "(null)";
}
len = _strlen(s);

for (j = 0; j < len; j++)
{
_putchar(s[j]);
}
return (len);
}

/**
*print_37 - prints the percentage sign
*Return: If 0,success
*/
int print_37(void)
{
_putchar(37);
return (1);
}

/**
 * printf_integer - function that prints an integer
 * @args: arguments
 * Return: number of digits printed
 */
int printf_integer(va_list args)
{
int num = va_arg(args, int);
int count = 0;

if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
else if
(num == 0)
{
_putchar('0');
return (1);
}
count += print_number(num);
return (count);
}
