#include "main.h"
/**
*print_str - write a string
*@s: string to print 
* Return: string length
*/
int print_str(char *s)
{
int i;
if (s)
for (i = 0; s[i] != '\0'; i++)
put_char(s[i]);
return(i - 1);
}
