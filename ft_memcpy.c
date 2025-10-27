/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:47:42 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/19 15:49:09 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char 	src[] = "abcdefg";
	//char	s[] = "";
	char *dest = src + 2;

	char *a = ft_memcpy(dest, src, 4);
	printf("%s\n", a);
}*/
