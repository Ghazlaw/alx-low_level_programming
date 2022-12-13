#include "main.h"
/**
 * print alphabets a-z in the lowercase
 * use _putchar twice
 */
void print_alphabet(void);
{
	char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar("\n");
}
