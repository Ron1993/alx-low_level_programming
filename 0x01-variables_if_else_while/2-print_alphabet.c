#include <stdio.h>

/**
 * main - print all the alphabets in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('n');
return (0);
}
