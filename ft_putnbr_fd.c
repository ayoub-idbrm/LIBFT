#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd (int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb > 9)
		ft_putnbr_fd(nb / 10);
	c = (nb % 10) + 0;
	write (fd, &c, 1);
}
