#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	char 	*p;

	i = 0;
	p = (unsigned char *)s;

	while ( i < n)
	{
		p[i] = (unsigned char )ca;
		i++;
	}
	return (s);
}
