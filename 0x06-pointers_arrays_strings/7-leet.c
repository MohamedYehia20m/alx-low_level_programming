/**
 * leet - Short description, single line
 * @s : Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */
char *leet(char *s)
{
	char chars[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		while (j < 10)
		{
			if (*(s + i) == chars[j])
				*(s + i) = num[(j % 5)];
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
