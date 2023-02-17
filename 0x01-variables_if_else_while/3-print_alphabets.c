#include <stdio.h>
/** main - Print Alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	
	for (i = 0; i < 52; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
