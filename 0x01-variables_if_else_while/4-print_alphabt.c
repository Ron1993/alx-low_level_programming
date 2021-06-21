#include <stdio.h>

/**
 * main - Print all alphabtes in lowercase except q and e
 * A new line
 * Return: Always 0 (success)
 */
int main(void)
{
char i = 'a';
while (i <= 'z')
{
if (i != 'e'; && i <= 'q')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
  
}
