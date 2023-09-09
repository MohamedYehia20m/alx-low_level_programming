/**
 * _strcat - a function that concatenates two strings.
 * @src  : pointer to char.
 * @dest : pointer to char.
 *
 * Description: a function that concatenates two strings.
 * by looping through the dest parameter to define its length
 * then repeat with src to concatenate on dest.
 *
 * Return: returns a pointer to char.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';
	return (dest);
}
