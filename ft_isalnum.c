#include "libft.h"
int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z' || c >= '0' && c <= '9' || c >= 'A' && c <= 'z')
		return (1);
	else 
		return (0);
}
