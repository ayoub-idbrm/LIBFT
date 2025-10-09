#include "libft.h"
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] )
		i++;
	return (i);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*join;

	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[i])
	{
		join[j + i] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
