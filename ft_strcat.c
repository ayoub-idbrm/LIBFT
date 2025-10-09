#include "libft.h"
char 	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (dst[j])
		j++;
	while (src[i])
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (dst);
}
