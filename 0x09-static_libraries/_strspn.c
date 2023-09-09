/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s : pointer to bytes to search after
 * @accept : pointer to bytes to be searched in
 *
 * Description: a function that gets the length of a prefix substring.
 *
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int z = 0;

	while (*(s + i) != '\0' && i <= z)
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
																			if (*(s + i) == *(accept + j))
				{
																				z++;
					break;														}
				j++;
		}
		i++;
	}
	return (z);
}
