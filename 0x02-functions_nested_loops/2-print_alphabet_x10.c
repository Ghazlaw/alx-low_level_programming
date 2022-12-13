#include "main.h"
/**
 * print_alphabet_x10 - program to print_alphabet_x10
 * by Ghazlaw
 */
void print_alphabet_x10(void)

{
	char alphabet;
	int count = 0;

	while (count++ <= 9)
	{

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar("\n");
	}
}
