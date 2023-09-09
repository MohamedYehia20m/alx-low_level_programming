/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @accept : pointer to bytes to search after
 * @s : pointer to bytes to be searched in
 *
 * Description: a function that searches a string for any of a set of bytes.
 *
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
