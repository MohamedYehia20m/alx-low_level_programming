/**
 * rev_string - a function that reverses a string.
 * @s : pointer to char
 *
 * Description: a function that reverses a string.
 * by looping through it and 2 directions and swap characters
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int a = 0;

	while (*(s + i) != '\0')
	{
		i++;

	}
	a = (int)(i / 2) - 1;

	while (a >= 0)
	{
		char x = *(s + i - 1 - a);
		char y = *(s + a);
		*(s + a) = x;
		*(s + i - 1 - a) = y;
		a--;
	}
}
