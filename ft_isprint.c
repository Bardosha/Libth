int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
            return (1);
    return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char    c1 = 'A';
    char    c2 = '7';
    char    c3 = '\0';
    printf("First char: %c\n", c1);
    printf("Second char: %c\n", c2);
    printf("Third char: %c\n", c3);
    printf("FS is Char? %d\n", ft_isprint(c1));
    printf("SS is Char? %d\n", ft_isprint(c2));
    printf("TS is Char? %d\n", ft_isprint(c3));
    return (0);
}
*/