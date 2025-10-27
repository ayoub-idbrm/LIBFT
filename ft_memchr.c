/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:23:53 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/19 15:13:37 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>

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
	char	*p = "hello";
	char	*r;
	r = ft_memchr(p, 'q', 5);
	printf("%s\n", r);
}*/
