#include <stddef.h>

void	*ft_memmove(void *dst, const void *src,size_t n)
{
	size_t		i;
	unsigned char 	*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	
	if (d > s)
	{
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else 
	{
		while ( i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
