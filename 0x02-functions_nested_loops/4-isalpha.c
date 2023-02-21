#include "main.h"

/**
  *_isalpha - function to check for lowercase.
  *
  *@c: The character in ASCII code
  *
  *Return: 1 for lowercase character. 0 for the rest.
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
