#include "main.h"
/**
*_printf - entry point of the code
*@format:input
* Return:length of string
*/
int _printf(const char *format, ...)
{
unsigned int i, s_len, r = 0;
va_list x;
va_start(x, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
write(1, &format[i], 1);
r++;
}
else if (format[i + 1] == 'c')
{
put_char(va_arg(x, int));
i++;
}
else if (format[i + 1] == '%')
{
put_char('%');
i++;
}
else if (format[i + 1] == 's')
{
s_len = print_str(va_arg(x, char*));
r += s_len;
i++;
}
else if (format[i + 1] == 'd')
}

va_end(x);
return (r);
}
