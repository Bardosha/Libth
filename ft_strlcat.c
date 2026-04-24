#include <stdio.h>

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    unsigned int    i;
    unsigned int    len;

    i = 0;
    len = 0;
    while (dst[len] != '\0')
        len++;
    while (src[i] != '\0' && (len + i) < dstsize - 1)
    {
        dst[len + i] = src[i];
        i++;
    }
    dst[len + i] = '\0';
    return (len + i);
}
/*
int main(void)
{
    char    dest[29] = "Everything will";
    char    src[] = " be perfect!";
    printf("Copied str with sizeof: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
    printf("dest: %s\n", dest);

    unsigned int    n = 29;
    char            desti[29] = "Everything will";
    char            srci[] = " be perfect!";
    printf("Copied string with n: %zu\n", ft_strlcat(desti, srci, n));
    printf("desti: %s\n", desti);
    return (0);
}
*/