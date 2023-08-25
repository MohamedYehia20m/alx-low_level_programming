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

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 'a' && *(s + i) <= 'm') ||
			 (*(s + i) >= 'A' && *(s + i) <= 'M'))
			*(s + i) += 13;
		else if ((*(s + i) >= 'n' && *(s + i) <= 'z') ||
			(*(s + i) >= 'N' && *(s + i) <= 'Z'))
			*(s + i) -= 13;
		i++;
	}
	return (s);
}
