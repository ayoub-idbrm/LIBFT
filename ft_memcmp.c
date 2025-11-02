/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:32:32 by aidbrm            #+#    #+#             */
/*   Updated: 2025/11/01 15:51:01 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*d;

	i = 0;
	p = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] != d[i])
			return (p[i] - d[i]);
		i++;
	}
	return (0);
}
