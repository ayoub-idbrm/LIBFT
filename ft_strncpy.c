#include <stddef.h>

char	ft_strncpy(char dst, const char src, size_t size)
{
	size_t		i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
