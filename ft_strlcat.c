#include "libft.h"
#include <stddef.h>

int	ft_strlen(char *d)
{
	int	i;

	i = 0;
	while(d[i])
	{
		i++;
	}
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		d_len;
	size_t		s_len;
	int		i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);

	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] && i < size)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
