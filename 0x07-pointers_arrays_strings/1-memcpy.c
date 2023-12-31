/**
 * _memcpy -  a function that copies memory area.
 * @dest : destination memory area
 * @src : source memory area
 * @n : no. of bytes to be copied
 *
 * Description:  a function that copies memory area.
 *
 * Return: pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
