#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dtmp;
	unsigned char	*stmp;

	stmp = (const unsigned char *) src;
	dtmp = (unsigned char *) dest;
	while (n > 0)
	{
		*dtmp++ = *stmp++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Perfect";
	char	dest[10];
	printf("Org str: %s\n", src);

	memmove(dest, src, 3);
	printf("After fct: %s\n", dest);
	return (0);
}