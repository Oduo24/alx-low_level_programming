/**
 * *_strchr - function that seraches for a character
 * @s: the string to be searched
 * @c: the character to be serched
 * Return: c, a pointer to the first occurence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (c);
		}
		else
		{
			return (NULL);
		}

	}
}

