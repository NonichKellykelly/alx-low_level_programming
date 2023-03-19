#include <stdio.h>
/**
 * main - entry point
 * description - program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if(i != 'a' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
