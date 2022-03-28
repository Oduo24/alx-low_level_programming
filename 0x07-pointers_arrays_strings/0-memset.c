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

	while (i < n)
	{
		s[i] = (unsigned char)b;
		i++;
	
	}	
	return (s);
}
