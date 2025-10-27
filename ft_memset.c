/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:25:10 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/18 15:03:58 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = (char )c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char	res[5] = "ayoub";

	ft_memset(&res[0], '1',1);
	ft_memset(&res[1] , '3', 1);
	ft_memset(&res[2] , '3', 1);
	ft_memset(&res[3], '7', 1);
	ft_memset(&res[4] , 0, 1);
	printf("%s\n", res);
}*/
