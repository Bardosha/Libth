//header
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss;
	int		i;
	int		j;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ss = malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
		ss[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		ss[i++] = s2[j++];
	ss[i] = '\0';
	return (ss);
}
/*
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
int	main(void)
{
	char	s1[] = "Bard";
	char	s2[] = "osha7";

	printf("Org str: %s and %s\n", s1, s2);
	printf("Str together: %s\n", ft_strjoin(s1, s2));
	return (0);
}
*/