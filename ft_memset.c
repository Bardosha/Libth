#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char    *tmp;

    tmp = (unsigned char *) b;
    while (len > 0)
    {
        *tmp = (unsigned char) c;
        tmp++;
        len--;
    }
    return (b);
}
/*
int main(void)
{
    char str[] = "Perfect";
    printf("Org str: %s\n", str);

    ft_memset(str, '7', 3);
    printf("After fct: %s\n", str);
    return (0);
}
*/