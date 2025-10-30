/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:23:53 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/29 11:25:20 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char )c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	char	*p = "hel\0xF4lo";
	char	*r;
	r = ft_memchr(p, 244, 5);
	printf("%s\n", r);
}*/
