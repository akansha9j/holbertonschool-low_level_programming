/**
 * _pow_recursion - calculates the value of x raised to the power of y.
 * @x: input number 1
 * @y: input number 2
 *
 * Return: the value of x raised to the power of y.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
