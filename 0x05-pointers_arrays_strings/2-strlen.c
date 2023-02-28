#include "main.h"

/**
* _strlen - returns the length of a string.
*
* @s: input string.
*
* Return: length of a string.
*/
int _strlen(char *s)
{
	int slen = 0;

	while (*(s + slen) != '\0')
		slen++;
	return (slen);
}
