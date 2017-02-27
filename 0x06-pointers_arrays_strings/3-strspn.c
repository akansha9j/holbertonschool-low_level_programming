/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the input string
 * @accept: pointer to the matching string
 *
 * Return:number of bytes in the initial segment of s which consist
 * only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				break;
			}
		}
	}
	return (len);
}
