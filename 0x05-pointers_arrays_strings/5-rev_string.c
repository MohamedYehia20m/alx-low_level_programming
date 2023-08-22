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
	int len = _strlen(s);
	int a = (int)(len/2) - 1;

	while(a >= 0)
	{
		char x = *(s+len-1-a);
		char y = *(s+a);
		*s = x;
		*(s+len-1) = y;
		a--;
	}
}
