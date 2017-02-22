/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: buffer
 * @src: source string
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *ch;

	ch = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ch);
}
