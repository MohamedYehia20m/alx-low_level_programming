/**
 * _strncat - a function that concatenates two strings.
 * @src  : pointer to char.
 * @dest : pointer to char.
 * @n    : no. of bytes to be concatenated
 *
 * Description: a function that concatenates two strings.
 * by looping through the dest parameter to define its length
 * then repeat with src to concatenate on dest n bytes from src
 *
 * Return: returns a pointer to char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0' && j != n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j != n)
		*(dest + i) = '\0';
	return (dest);
}
