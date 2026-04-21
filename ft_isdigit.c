int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
            return (1);
    return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char    c1 = 'A';
    char    c2 = '7';
    printf("First char: %c\n", c1);
    printf("Second char: %c\n", c2);
    printf("FS is Char? %d\n", ft_isdigit(c1));
    printf("SS is Char? %d\n", ft_isdigit(c2));
    return (0);
}
*/