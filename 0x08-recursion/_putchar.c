#include <unistd.h>

/**
 * _putchar - print character
 *
 * @c: Character
 *
 * Return: string
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
