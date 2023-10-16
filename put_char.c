#include "main.h"
/**
 * put_char - writes the character c
 * @c: The character to print
 * Return: written char
 */
int put_char(char c)
{
return (write(1, &c, 1));
}
