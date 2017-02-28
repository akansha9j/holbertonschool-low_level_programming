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
	int i, j, k, count, len;
	char *ch;

	k = 0;
	count = 0;
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
				count = count + 1;
				if (count == 1)
				{
					ch = &haystack[i];
				}
				break;
			}
			else
			{
				k = 0;
				count = 0;
			}
		}
	}
	if (count == len)
	{
		return (ch);
	}
	return ('\0');
}
