/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to input string
 * @accept: pointer to the matching string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k;
	char *ch;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k = 1;
				break;
			}
		}
		if (k == 1)
		{
			break;
		}
	}
	ch = &s[i];
	return (ch);
}
