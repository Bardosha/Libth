#include <stdio.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while (src[i] != '\0')
        i++;
    return (i);
}
/*
int main(void)
{
    char    src[] = "Everything will be perfect!";
    char    dest[19];
    printf("Org str: %s\n", src);
    printf("Copied str with sizeof: %zu\n", ft_strlcpy(dest, src, sizeof(dest)));
    printf("Copied str with sizeof: %s\n", dest);

    unsigned int    n = 29;
    char            desti[29];
    printf("Copied string with n: %zu\n", ft_strlcpy(desti, src, n));
	printf("Copied string with n: %s\n", desti);
    return (0);
}
*/