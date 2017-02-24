/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to input string
 *
 * Return: pointer to encoded string
 *
 */
char *rot13(char *s)
{
	int i, j;

	i = 0;

	char *ar1  = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char *ar2  = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{

		for (j = 0; j < 52; j++)
		{
			if (s[i] == ar1[j])
			{
				s[i] = ar2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
