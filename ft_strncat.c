#include <stddef.h>

char	*ft_strncat(char *dst , const char *src, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (dst[j])
		j++;
	while (i < n)
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (dst);
}
