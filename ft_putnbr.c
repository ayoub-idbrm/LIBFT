#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int	n)
{
	long	nb;
	char	c;

	nb = n;
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + 0;
       write (1, &c, 1);	
}
