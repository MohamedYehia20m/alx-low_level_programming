/**
 * swap_int - a function that swaps the values of two integers.
 * @a : first pointer to int
 * @b : second pointer to int
 *
 * Description: a function that swaps the values of two integers
 * by dereferencing it and swap the value using third local variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
