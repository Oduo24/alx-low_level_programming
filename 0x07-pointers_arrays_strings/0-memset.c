/**
 * *_memset - function that acts as the memset standard c function
 * @s: memory location
 * @b: byte to be filled
 * @n: number of times the b byte should be pplacedin the memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
