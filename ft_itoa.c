/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:21:01 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/28 13:21:34 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n)
{
	int	len;

	len = (n <= 0);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	nb;

	nb = n;
	len = lenght(n);
	p = (char *)malloc(sizeof(char ) * (len + 1));
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (nb == 0)
		p[0] = '0';
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		p[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (p);
}
/*#include <stdio.h>
int main()
{
	int	n;
	n = -2005;
	printf("%s\n",ft_itoa(n)); 
}*/
