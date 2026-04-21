int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}
/*
#include <stdio.h>
int main(void)
{
    char    str1[] = "Perfect";
    char    str2[] = "Perf   ect";
    printf("FS: %s\n", str1);
    printf("SS: %s\n", str2);

    printf("Length of FS: %d\n", ft_strlen(str1));
    printf("Length of SS: %d\n", ft_strlen(str2));
    return (0);
}
*/