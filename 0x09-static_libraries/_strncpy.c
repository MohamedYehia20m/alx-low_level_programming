/**
 * _strncpy - a function that copies a string.
 * @src  : pointer to char.
 * @dest : pointer to char.
 * @n    : no. of bytes to be concatenated
 *
 * Description: a function that copies a string.
 * by looping through the src parameter to copy n of bytes to dest
 *
 * Return: returns a pointer to char.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i != n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
