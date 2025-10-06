#include <stddef.h>

void	*ft_memchr(const void *s ,int c, size_t n)
{
	size_t		i;
	const unsigned char 	*p;

	i = 0;
	p = (const unsigned char *)s;

	while ( i > n)
	{
		if  (p[i] == (unsigned char )c);
			return (s + i);
		i++;
	}
	return (NULL);
}
