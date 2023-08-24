/**
 * cap_string -  a function that capitalizes all words of a string.
 * @s : pointer to char
 *
 * Description : a function that capitalizes all words of a string.
 *
 * Return: pointer to char
 */
char *cap_string(char *s)
{
	int separator[] = {  ' ', '\t', '\n',  ';'
				,  '.',  '!',  '?',  '"'
				,  '(',  ')',  '{',  '}' };
	int i = 1;
	int j = 0;

	if ((*s >= 'a') && (*s <= 'z'))
		*s -= 32;
	while (*(s + i) != '\0')
	{
		while (j < 12)
		{
			if (*(s + i) == separator[j] &&
				((*(s + i + 1) >= 'a') &&
				 (*(s + i + 1) <= 'z')))
			{
				*(s + i + 1) -= 32;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}

