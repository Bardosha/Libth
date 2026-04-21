int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            return (1);
    return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char    c1 = 'A';
    char    c2 = '\0';
    printf("First char: %c\n", c1);
    printf("Second char: %c\n", c2);
    printf("FS is Char? %d\n", ft_isalpha(c1));
    printf("SS is Char? %d\n", ft_isalpha(c2));
    return (0);
}
*/