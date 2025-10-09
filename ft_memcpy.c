#include "libft.h"
#include <stddef.h>

void	*ft_memset( void *dest , const void *src, size_t n)
{
	int			i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
