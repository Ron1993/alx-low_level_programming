#include <unistd.h>
/**
 * main - write the character c to the standout
 * @c - the character to print
 * Return: On success 1 
 */

int _putchar(char c);
{
return (write(1, &c, 1));
}
