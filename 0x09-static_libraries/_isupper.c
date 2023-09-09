/**
 * string_toupper - a function that changes all lowercase letters of a string
 * to uppercase.
 * @s : pointer to char
 *
 * Description:  a function that changes all lowercase letters of a string
 * to uppercase by looping thrpugh the string and upercasing every lowercase
 * alphabet.
 *
 * Return: pointer to char
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
