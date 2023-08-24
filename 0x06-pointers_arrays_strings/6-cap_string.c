/**
 * cap_string - a function that capitalizes all words of a string.
 * @s : pointer to char
 *
 * Description: a function that capitalizes all words of a string.
 * by looping through the string and capitalizes each character
 *
 * Return: pointer to char
 */

char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 65 && *(s + i) <= 90)
			*(s + i) = *(s + i) + 32;
		if (*(s + i) == '\t')
			*(s + i) = ' ';
		i++;
	}
	return (s);
}
