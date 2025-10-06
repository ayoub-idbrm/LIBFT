#include <stddef.h>

void	ft_bzero(void *s , size_t n)
{
	int	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;

	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (s);
}
