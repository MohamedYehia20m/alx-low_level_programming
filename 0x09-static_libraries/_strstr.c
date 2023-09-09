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
	char *dummy_needle = needle;
	char *first;
	int flag = 0;

	if (*(needle) == '\0')
		return (haystack);
	while (*(haystack) != '\0')
	{
		dummy_needle = needle;
		flag = 0;
		first = NULL;
		while (*(haystack) == *(dummy_needle))
		{
			if (*(++dummy_needle) == '\0')
			{
				return (first);													}
																		if (flag == 0)
			{
				first = (haystack);
				flag = 1;
			}
																		(haystack++);													}
		(haystack++);
	}
	return (NULL);
}
