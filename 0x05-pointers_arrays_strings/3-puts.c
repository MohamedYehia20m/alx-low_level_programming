/**
 * void_puts - function that prints a string, followed by a new line, to stdout.
 * @str : to char pointer
 *
 * Description: function that prints a string, followed by a new line, to stdout.
 * using to char pointer that loops through the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	while(*(str+i) != '\0')
	{
		_putchar(*(str+i));
		i++;
	}
	_putchar('\n');
}
