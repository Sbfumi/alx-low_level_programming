#include <unistd.h>
#include "main.h"

/**
 * main - See description
 * Description: It prints out _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
