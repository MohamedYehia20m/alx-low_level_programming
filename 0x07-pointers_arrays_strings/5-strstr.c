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

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle))
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
