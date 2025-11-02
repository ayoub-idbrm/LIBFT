/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:51:45 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/20 12:20:47 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		f;
	int		end;
	int		i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	f = 0;
	while (s1[f] && ft_strchr(set, s1[f]))
		f++;
	end = ft_strlen(s1);
	while (end > f && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc(sizeof (char ) * (end - f + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (f < end)
	{
		ptr[i] = s1[f];
		i++;
		f++;
	}
	ptr[i] = '\0';
	return (ptr);
}
