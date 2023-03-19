#include <stdio.h>
/**
 * main - entry point
 * description - a program that prints the alphabet in lower case and then uppercase
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
