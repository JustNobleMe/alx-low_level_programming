#include "main.h"
/**
  *print_alphabet_x10 - Function that prints 10 times the alphabet, in lowercase.
  *
  *return (0) success
  */

void print_alphabet_x10(void)
{
	int i = 0, a;
	for (a = 0; a < 10; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar (i);
		}
	_putchar ('\n');
	}
		
}
