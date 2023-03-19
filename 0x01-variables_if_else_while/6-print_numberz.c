#include <stdio.h>
/**
 * main - entry main
 * description - program that prints all single digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
