#include <stdio.h>
/*
 * main - program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
