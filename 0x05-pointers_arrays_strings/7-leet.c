/**
 * leet - encodes a string into 1337
 * @s: pointer to input string
 *
 * Return: pointer to updated string
 *
 */
char *leet(char *s)
{
	int i, j;

	char ch_caps[] = "AEOTL";
	char ch_small[] = "aeotl";
	char num_ary[] = "43071";

	for (j = 0; j < 5; j++)
	{
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] == ch_caps[j] || s[i] == ch_small[j])
			{
				s[i] = num_ary[j];
			}
			i++;
		}
	}
	return (s);
}
