/**
 * _strstr - locates a substring.
 * @haystack: pointer to input string
 * @needle: pointer to substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, len;
	char *ch;

	k = 0;
	len = 0;

	while (needle[len] != '\0')
	{
		len++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = k; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				k = j + 1;

				if (k == 1)
				{
					ch = &haystack[i];
				}
				if (k == len)
				{
					return (ch);
				}
				break;
			}
			else
			{
				k = 0;
				break;
			}
		}
	}

	return ('\0');
}
