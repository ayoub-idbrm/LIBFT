#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;
	unsigned char	*d;
	const unsigned char *s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	while (i < n)
	{
		d[i] = s[i];
		if ( s[i] == (unsigned char )c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
