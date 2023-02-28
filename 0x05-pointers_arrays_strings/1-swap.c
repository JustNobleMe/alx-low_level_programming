#include "main.h"

/**
  *swap_int - function that swap value
  *
  *@a: first value
  *@b: second value
  *
  *Return: nothing.
  */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
