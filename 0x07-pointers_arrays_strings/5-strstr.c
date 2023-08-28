#include <stddef.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: pointer to char
 * @needle: pointer to char
 *
 * Description: a function that locates a substring.
 *
 * Return: pointer to char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int x = -1;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(haystack + i) == *(needle + j))
		{
			if (x == -1)
				x = i;
			j++;
		}
		i++;
	}
	if (*(needle + i) == '\0')
		return (haystack + x);
	else
		return (NULL);
}
