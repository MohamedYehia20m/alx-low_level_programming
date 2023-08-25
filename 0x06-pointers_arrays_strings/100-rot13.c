/**
 * rot13 - a function that encodes a string using rot13.
 * @s : pointer to char
 *
 * Description: a function that encodes a string using rot13. by looping
 * string and asking if the string is in forst halg or second then replace
 * it with the other half equivalent using ascii code
 *
 * Return: pointer to char
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (*(s + i) == x[j])
			{
				*(s + i) = y[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
