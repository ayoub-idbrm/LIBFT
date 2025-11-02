/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:21:01 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/30 15:18:49 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n)
{
	int		len;
	long	nb;

	nb = n;
	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
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
