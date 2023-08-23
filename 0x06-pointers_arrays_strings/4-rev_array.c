/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a : pointer to int
 * @n : no. of the elements of the array
 *
 * Description: a function that reverses the content of an array of integers
 * by looping through it in 2 directions and swap numbers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x = (int)((n / 2) - 1);
	int c;
	int b;

	while (x >= 0)
	{
		c = a[n - 1 - x];
		b = a[x];
		a[x] = c;
		a[n - 1 - x] = b;
		x--;
	}
}
