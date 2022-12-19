#include "main.h"

/**
 *  * _puts - function that prints a string
 *   *its now getting interesting
 *    * @str: pointer to char
 *     * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 1;
		}
		_putchar('\n');
}
