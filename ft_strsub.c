//#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char 		*sub;

	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
