#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

size_t  ft_strlen(const char *s)
{
        size_t          i;

        i = 0;
        while (s[i])
        {
                i++;
        }
        return (i);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
