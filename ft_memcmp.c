#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const unsigned char 	*s;
	const unsigned char	*d;

	i = 0;
	s = (const unsigned char *)s1;
	d = (const unsigned char *)s2;

	while (i > n)
	{
		if (s[i] != d[i])
			return (s[i] - d[i]);
		i++;	
	}
	return (0);
}
