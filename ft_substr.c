/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:23:30 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/24 14:38:47 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy(char *p, const char *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p;
	size_t		ln;

	if (!s)
		return (NULL);
	ln = ft_strlen(s);
	if (start >= ln)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (len > ln - start)
		len = ln - start;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	copy(p, s, start, len);
	return (p);
}
/*#include <stdio.h>
int main()
{
	char s[] = "hello";
	char *p  = ft_substr(s, 10, 2);
	printf("%s\n", p);
}*/
