/**
 * _memset -  a function that fills memory with a constant byte.
 * @s : pointer to char
 * @b : constant byte
 * @n : no. of bytes of the memry pointed by s
 *
 * Description:  a function that fills memory with a constant byte.
 *
 * Return: pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
