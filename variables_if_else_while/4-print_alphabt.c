#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase and the uppercase
 * You can only use two putchar
 * Return: 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
