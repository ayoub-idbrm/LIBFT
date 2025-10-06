#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t 	j;

	if(*to_find == '\0')
		return ((char *)str);

	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] && to_find[j] str[i + j] == to_find && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}	
