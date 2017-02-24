/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array
 * @n: elements in the array
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i, tmp, j;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
