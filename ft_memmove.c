/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:00:03 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/29 15:54:17 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d <= s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[] = "123456789";
    char str2[] = "123456789";

    printf("Before overlapping copy:\n");
    printf("ft_memmove: %s\n", str1);
    printf("memmove   : %s\n\n", str2);

    // Overlapping case: dest starts inside src
    ft_memmove(str1 + 2, str1, 5); 
    memmove(str2 + 2, str2, 5);     // standard function to compare

    printf("After overlapping copy:\n");
    printf("ft_memmove: %s\n", str1);
    printf("memmove   : %s\n", str2);

    return (0);
}*/
